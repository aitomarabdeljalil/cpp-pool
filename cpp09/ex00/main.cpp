/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:01:12 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/18 11:10:23 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw std::invalid_argument("Error");
		std::string myText;
		std::ifstream MyReadFile(av[1]);
		while (std::getline (MyReadFile, myText)) {
			std::cout << myText << std::endl;
		}
		MyReadFile.close();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}
