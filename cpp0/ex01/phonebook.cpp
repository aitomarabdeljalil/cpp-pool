/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:23:09 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/25 10:59:31 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	len = 0;
	pos = 0;
}

bool Phonebook::ft_addContact(Contact c)
{
	if (!c.isValid())
		return false;
	list[pos] = c;
	if (len < 8)
		len++;
	pos++;
	if (pos == 8)
		pos = 0;
	return true;
}

void Phonebook::ft_search(int index)
{
	if (index >= 0 && index < len)
	{
		for(int i = 0; i < len; i++)
		{
			if (i == index)
			{
				std::cout << "First Name : " << list[i].getFname();
				std::cout << "Last Name : " << list[i].getLname();
				std::cout << "Nick Name : " << list[i].getNname();
			}
		}
	}
	else
		std::cout << "\n Error! no Contact with this index" <<std::endl;
}

void Phonebook::printPhonebook()
{
	for(int i = 0; i < len; i++)
	{
		std::cout << std::string(44, '-') << std::endl;
		std::cout << std::setw(22) << "index|first name|" << std::setw(11) << "last name|" << std::setw(11) << "nick name|" << std::endl;
		std::cout << std::setw(10) << i + 1 << "|";
		if (list[i].getFname().length() > 10)
			std::cout << std::setw(10) << list[i].getFname().substr(0, 9) + '.' << "|";
		else
			std::cout << std::setw(10) << list[i].getFname() << "|";
		if (list[i].getLname().length() > 10)
			std::cout << std::setw(10) << list[i].getLname().substr(0, 9) + '.' << "|";
		else
			std::cout << std::setw(10) << list[i].getLname() << "|";
		if (list[i].getNname().length() > 10)
			std::cout << std::setw(10) << list[i].getNname().substr(0, 9) + '.' << "|";
		else
			std::cout << std::setw(10) << list[i].getNname() << "|" << std::endl;
	}
}

int Phonebook::getLen() { return len; }

void Phonebook::printoneContact(int i)
{
	std::cout << "First Name :=> " << list[i].getFname() << std::endl;
	std::cout << "Last Name :=> " << list[i].getLname() << std::endl;
	std::cout << "Nick Name :=> " << list[i].getNname() << std::endl;
}