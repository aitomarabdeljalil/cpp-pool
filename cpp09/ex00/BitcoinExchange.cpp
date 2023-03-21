/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:43:01 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/21 17:32:30 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string	trim(std::string s, std::string set)
{
    s.erase(0, s.find_first_not_of(set));
    s.erase(s.find_last_not_of(set) + 1);
    return (s);
}

std::list<std::string>	split(std::string s, std::string delimiter) {
    std::list<std::string>	result;
    size_t					pos = 0;
    std::string				token;

	if (delimiter.empty())
		throw std::invalid_argument("delimiter cannot be an empty string.");
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        result.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    result.push_back(s);
    return (result);
}

time_t	hundelTime(std::string str) {
	struct tm	result = {};
	char 		*_tme = NULL;
	int			maxDays = 31;

	_tme = strptime(str.c_str(), "%Y-%m-%d", &result);
	if (result.tm_mon < 0 || result.tm_mon > 11)
		throw std::invalid_argument("Error");
	switch (result.tm_mon) {
		case 3: case 5: case 8: case 10:
			maxDays = 30;
		break;
		case 1:
			maxDays = (result.tm_year % 4 == 0 && (result.tm_year % 100 != 0 || result.tm_year % 400 == 0)) ? 29 : 28;
		break;
  	}
	if (result.tm_mday < 1 || result.tm_mday > maxDays)
    	throw std::invalid_argument("Error");
	if (!_tme || *_tme != '\0')
		throw std::invalid_argument("Error");
	return (mktime(&result));
}

float	hundelFloat(std::string str) {
	const char *fnb = str.c_str();
	char *ptr;
	float value = strtof(fnb, &ptr);

	if (*ptr != '\0' || value == HUGE_VALF || value == - HUGE_VALF)
		throw std::invalid_argument("Error");
	return value;
}

std::map<time_t, float>	dbList(std::string path) {
	std::ifstream	dbFile;
	std::string		line;
	std::list<std::string>	_tokens;
	std::map<time_t, float>	dbMap;
	bool					firstLine = true;
	dbFile.open(path);
	if (!dbFile.is_open())
		throw std::runtime_error("Error: could not open file.");
	while (std::getline(dbFile, line)) {
		if (firstLine && line == "date,exchange_rate") {
			firstLine = false;
			continue;
		}
		_tokens = split(line, ",");
		if (_tokens.size() != 2)
			throw std::invalid_argument("Error");
		time_t tm = hundelTime(trim(_tokens.front(), " "));
		_tokens.pop_front();
		float val = hundelFloat(trim(_tokens.front(), " "));
		dbMap[tm] = val;
	}
	return dbMap;
}

void	hundelLine(std::string line, const std::map<time_t, float>& mysql) {
	std::list<std::string>	params = split(line, "|");
	std::map<time_t, float>::const_iterator it;

	if (params.size() != 2)
		throw std::invalid_argument("Error: bad input => " + line);
	std::string _date = trim(params.front(), " ");
	params.pop_front();
	std::string _val = trim(params.front(), " ");

	time_t tm = hundelTime(_date);
	float value = hundelFloat(_val);
	if (value < 0)
		throw std::invalid_argument("Error: not a positive number.");
	if (value > 1000)
		throw std::invalid_argument("Error: too large a number.");
	it = mysql.upper_bound(tm);
	if (it != mysql.begin())
		it--;
	std::cout << _date + " => " + _val + " = " << value * (*it).second << std::endl;
}
