/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:41:04 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/09 10:43:52 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& other)
{
    *this = other;
}

Intern& Intern::operator==(const Intern& other)
{
    this = other;
    return *this;
}

Intern::~Intern()
{
}

Form* Intern::makeForm(std::string name, std::string target)
{
    std::string FormTabName[] = { "robotomy request", "presidential pardon", "shrubbery creation"};
    form* forms[] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };

    for (int i = 0; i < 3; i++) {
        if (name == FormTabName[i]) {
            std::cout << "Intern creates " << name << std::endl;
            return (forms[i]);
        }
    }
    std::cout << "Intern couldn't create " << name << " form" << std::endl;
    return (NULL);
}