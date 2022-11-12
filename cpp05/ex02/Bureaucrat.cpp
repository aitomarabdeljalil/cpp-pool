/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:33:38 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/11 15:17:37 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) 
{
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) : _name(Name)
{
    if (Grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (Grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    else
        _grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& br) : _name(br.getName())
{
    this->_grade = br.getGrade();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& br)
{
    new (this) Bureaucrat(br);
    return *this;
}

std::string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

void Bureaucrat::incrementGrade()
{
    if (this->_grade > 1)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade < 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(const Form& fr)
{
    if (fr.getSigned())
        std::cout << *this << " signed " << fr << std::endl;
    else
        std::cout << *this << " couldn’t sign  " << fr << " because his grade is too low." << std::endl;
}

void Bureaucrat::executeForm(Form const & form)
{
    if (form.getSigned())
        std::cout << this->getName() << " excuted " << form.getName() << std::endl;
    else
        std::cout << this->getName() << " couldnt execute " << form.getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br)
{
    os << br.getName() << ", bureaucrat grade " << br.getGrade() << ".";
    return os;
}


Bureaucrat::~Bureaucrat()
{
}
