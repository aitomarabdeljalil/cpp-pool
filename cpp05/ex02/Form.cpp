/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:03:44 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/11 13:14:50 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _Name(""), _Signed(false), _GradeRs(150), _GradeRe(150) {}

Form::Form(const Form& fr) : _Name(fr._Name), _Signed(fr._Signed), _GradeRs(fr._GradeRs), _GradeRe(fr._GradeRe)
{
}

Form& Form::operator=(const Form& fr)
{
    _Signed = fr._Signed;
    return *this;
}

Form::Form(std::string Name, int GradeRs, int GradeRe) : _Name(Name), _GradeRs(GradeRs), _GradeRe(GradeRe)
{
    if (_GradeRe < 1 || _GradeRs < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (_GradeRe > 150 || _GradeRs > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    else
        _Signed = false;
}

std::string Form::getName() const { return this->_Name; }
int Form::getGradeRs() const { return this->_GradeRs; }
int Form::getGradeRe() const { return this->_GradeRe; }
bool Form::getSigned() const { return this->_Signed; }

void Form::beSigned(const Bureaucrat& br)
{
    if (br.getGrade() <= this->_GradeRs)
        this->_Signed = true;
    else
        throw Form::GradeTooLowException();
    
}

std::ostream& operator<<(std::ostream& os, const Form& fr)
{
    os << "Form Name: " << fr.getName() << " Sign status: " << fr.getSigned() << ", grade required to sign it: " << fr.getGradeRs() << ", grade required to execute it: " << fr.getGradeRe() <<".";
    return os;
}

Form::~Form()
{
}