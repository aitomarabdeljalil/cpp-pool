/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:24:49 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/24 16:59:00 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string Contact::getFname(){ return FirstName; }
std::string Contact::getLname(){ return LastName; }
std::string Contact::getNname(){ return NickName; }
std::string Contact::getNphone(){ return PhoneNumber; }
std::string Contact::getSecret(){ return Secret; }

void Contact::setFname(std::string fname)
{
	this->FirstName = fname;
}

void Contact::setLname(std::string lname)
{
	this->LastName = lname;
}

void Contact::setNname(std::string nname)
{
	this->NickName = nname;
}

void Contact::setNphone(std::string nphone)
{
	this->PhoneNumber = nphone;
}

void Contact::setSecret(std::string secr)
{
	this->Secret = secr;
}

bool Contact::isValid()
{
	if (this->FirstName.empty() || this->LastName.empty() || this->NickName.empty()
		|| this->PhoneNumber.empty() || this->Secret.empty())
		return false;
	return true;
}

// int Contact::set_id(int i)
// {
// 	return i + 1;
// }

// int Contact::get_fname()
// {
// 	std::cout << "Enter Your First Name : ";
// 	getline(std::cin, this->FirstName);
// 	if (this->FirstName == "" || std::cin.eof())
// 	{
// 		std::cout << "try again !\n";
// 		return 1;
// 	}
// 	return 0;
// }

// int Contact::get_lname()
// {
// 	std::cout << "Enter Your Last Name : ";
// 	getline(std::cin, this->LastName);
// 	if (this->LastName == "" || std::cin.eof())
// 	{
// 		std::cout << "try again !\n";
// 		return 1;
// 	}
// 	return 0;
// }

// int Contact::get_nname()
// {
// 	std::cout << "Enter Your Nick Name : ";
// 	getline(std::cin, this->NickName);
// 	if (this->NickName == "" || std::cin.eof())
// 	{
// 		std::cout << "try again !\n";
// 		return 1;
// 	}
// 	return 0;
// }

// int Contact::get_nphone()
// {
// 	std::cout << "Enter Your Phone Number : ";
// 	getline(std::cin, this->PhoneNumber);
// 	if (this->PhoneNumber == "" || std::cin.eof())
// 	{
// 		std::cout << "try again !\n";
// 		return 1;
// 	}
// 	return 0;
// }

// int Contact::get_secret()
// {
// 	std::cout << "Enter Your Phone Number : ";
// 	getline(std::cin, this->PhoneNumber);
// 	if (this->PhoneNumber == "" || std::cin.eof())
// 	{
// 		std::cout << "try again !\n";
// 		return 1;
// 	}
// 	return 0;
// }