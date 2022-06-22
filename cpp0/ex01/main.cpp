/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:20:07 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/11 22:14:17 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

class Contact {
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
	public:
		int get_fname();
		int get_lname();
		int get_nname();
		int setContact();
		void print()
		{
			std::cout << "\nEntered details are:" << std::endl;
			std::cout << "_________________________________" << std::endl;
			std::cout << "| f name  |  l name  |  n name  |" << std::endl;
			std::cout << "| " << FirstName << " | " << LastName << " | " << NickName << " |"<< std::endl;
			std::cout << "_________________________________" << std::endl;
		}
};

int Contact::get_fname()
{
	std::cout << "Enter Your First Name : ";
	getline(std::cin, this->FirstName);
	if (this->FirstName == "" || std::cin.eof())
	{
		std::cout << "try again !\n";
		return 1;
	}
	return 0;
}

int Contact::get_lname()
{
	std::cout << "Enter Your Last Name : ";
	getline(std::cin, this->LastName);
	if (this->LastName == "" || std::cin.eof())
	{
		std::cout << "try again !\n";
		return 1;
	}
	return 0;
}

int Contact::get_nname()
{
	std::cout << "Enter Your Nick Name : ";
	getline(std::cin, this->NickName);
	if (this->NickName == "" || std::cin.eof())
	{
		std::cout << "try again !\n";
		return 1;
	}
	return 0;
}

int Contact::setContact()
{
	if (this->get_fname() || this->get_lname() || this->get_nname())
		return 1;
	return 0;
}

int main(int ac, char **av)
{
	Contact c;
	c.setContact();
	c.print();
	return 0;
}