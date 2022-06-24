/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:24:49 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/24 18:48:39 by aait-oma         ###   ########.fr       */
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
