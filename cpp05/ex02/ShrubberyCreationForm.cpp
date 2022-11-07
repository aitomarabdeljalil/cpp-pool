/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:10:45 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/07 21:35:28 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137) , target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
    this->target = other.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    *this = other;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void shrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if ()
}