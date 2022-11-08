/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:31:27 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/08 16:42:12 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5) , target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
    this->target = other.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator(const PresidentialPardonForm& other)
{
    this = other;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!getSigned())
        throw Form::NotSignedException();
    if (executor.getGrade() > getGradeRe())
        throw Form::GradeTooLowException();

    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}