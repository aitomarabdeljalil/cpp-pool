/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:03:34 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/08 17:03:29 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int getRandom()
{
	srand((unsigned) time(NULL));
	int random = (rand() % 10) + 1;
	return random;
}

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) Form("RobotomyRequest", 72, 45), target(target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    this = other;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!getSigned())
        throw Form::NotSignedException();
    if (execute.getGrade() > getGradeRe())
        throw Form::GradeTooLowException();
    
    int nbr = getRandom();
    if (nbr <= 5)
        std::cout << this->target << " has been Robotomized." << std::endl;
    else
        std::cout << "the robotomy failed." << std::endl;
}