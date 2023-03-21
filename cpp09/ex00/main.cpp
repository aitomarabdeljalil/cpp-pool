/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:01:12 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/21 10:57:40 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cmath>

time_t	hundelTime(std::string str) {
	struct tm result = {};
	char *_tme = NULL;

	_tme = strptime(str.c_str(), "%Y-%m-%d", &result);
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
	dbFile.open(path);
	if (!dbFile.is_open())
		throw std::runtime_error("Error: could not open file.");
	while (std::getline(dbFile, line)) {
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

int main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw std::invalid_argument("Error: could not open file.");
		std::map<time_t, float> _db = dbList("data.csv");
		std::string line;
		std::ifstream MyReadFile(av[1]);
		while (std::getline (MyReadFile, line)) {
			try
			{
				hundelLine(line, _db);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		MyReadFile.close();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}
