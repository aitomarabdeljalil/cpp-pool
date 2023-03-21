/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:01:12 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/21 17:33:17 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw std::invalid_argument("Error: could not open file.");
		std::map<time_t, float> _db = dbList("data.csv");
		std::string		line;
		std::ifstream	readFile(av[1]);
		bool			firstLine = true;
		while (std::getline (readFile, line)) {
			if (firstLine && line == "date | value") {
				firstLine = false;
				continue;
			}
			try {
				hundelLine(line, _db);
			} catch(const std::exception& e) {
				std::cerr << e.what() << std::endl;
			}
		}
		readFile.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
