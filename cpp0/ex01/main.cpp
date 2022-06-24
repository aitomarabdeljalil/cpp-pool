/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:20:07 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/24 19:01:47 by aait-oma         ###   ########.fr       */
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

void getoneContact(Contact c)
{
	std::cout << "First Name :=> " << c.getFname() << std::endl;
	std::cout << "Last Name :=> " << c.getLname() << std::endl;
	std::cout << "Nick Name :=> " << c.getNname() << std::endl;
}
int main(int ac, char **av)
{
	Phonebook p;
	std::string	cmd;
	int i;

	std::cout << "> ";
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "EXIT")
			exit(0);
		else if (cmd == "ADD")
		{
			p.ft_addContact(getinfo());
		}
		else if (cmd == "SEARCH")
		{
			p.printPhonebook();

		}
		// if (std::cin.eof())
        // 	exit(1);
		std::cout << "> ";
	}
	return 0;
}