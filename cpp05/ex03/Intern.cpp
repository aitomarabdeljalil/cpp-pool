/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:41:04 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/11 16:17:03 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& other)
{
    (void)other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

Intern::~Intern()
{
}

Form* Intern::makeForm(std::string name, std::string target)
{
    std::string FormTabName[] = { 
        "robotomy request", 
        "presidential pardon", 
        "shrubbery creation"
    };
    int index = 3;
    Form * ret;

    for (int i = 0; i < 3; i++)
        if (FormTabName[i] == name)
            index = i;
    
    switch (index)
    {
        case 0:
        {
            std::cout << "Intern creates " << name << std::endl;
            ret = new RobotomyRequestForm(target);
            return ret;
            break;
        }
        case 1:
        {
            std::cout << "Intern creates " << name << std::endl;
            ret = new PresidentialPardonForm(target);
            return ret;
            break;
        }
        case 2:
        {
            std::cout << "Intern creates " << name << std::endl;
            ret = new ShrubberyCreationForm(target);
            return ret;
            break;
        }
    default:
        std::cout << "Intern couldn't create " << name << " form" << std::endl;
        break;
    }
    
    return (NULL);
}