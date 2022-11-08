/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:08:25 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/08 22:08:25 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern& other);
    Intern& operator==(const Intern& other);
    Form* makeForm(std::string name, std::string target);
    ~Intern();
};

Intern::Intern()
{
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

#endif