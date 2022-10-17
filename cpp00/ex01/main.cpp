/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:20:07 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/10 13:27:26 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include "phonebook.hpp"

std::string    read_info(std::string prompt)
{
    std::string    s;

    if (std::cin.eof())
        exit(1);
    std::cout << prompt;
    while (std::getline(std::cin, s))
	{
        if (!s.empty())
            return s;
        std::cout << "expected non-empty input!" << std::endl;
        std::cout << prompt;
    }
    exit(1);
}

Contact	getinfo()
{
	Contact	c;

	c.setFname(read_info("First Name> "));
	c.setLname(read_info("Last Name> "));
	c.setNname(read_info("Nick Name> "));
	c.setNphone(read_info("Phone Number> "));
	c.setSecret(read_info("Darkest Secre> "));
	return c;
}

int ft_getnbr()
{
	int		nbr;
	size_t	idx;
	std::string	s;

	while (1)
	{
		std::getline(std::cin, s);
		try
		{
			nbr = std::stoi(s, &idx);
			if (s.length() == idx)
				return nbr;
			else
				std::cout << "Invalid input" << std::endl;
		}
		catch(...)
		{
			std::cerr << "Invalid input" << std::endl;
		}
	}
}

int main(int ac, char **av)
{
	Phonebook p;
	std::string	cmd;
	int i;

	std::cout << "> ";
	while (std::getline(std::cin, cmd))
	{
		cmd.erase(std::remove_if(cmd.begin(), cmd.end(), isspace), cmd.end());
		if (cmd == "EXIT")
			exit(0);
		else if (cmd == "ADD")
			p.ft_addContact(getinfo());
		else if (cmd == "SEARCH")
		{
			p.printPhonebook();
			i = ft_getnbr();
			if (i < 0 || i > p.getLen())
				std::cout << "Error!!" << std::endl;
			else
				p.printoneContact(i - 1);
		}
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << "> ";
	}
	return 0;
}