/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:10:45 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/11 12:08:00 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137) , target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137) , target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other.getName(), other.getGradeRs(), other.getGradeRe())
{
	this->target = other.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	Form *f = this;

	*f = other;
    this->target = other.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!getSigned())
        throw Form::NotSignedException();
    if (executor.getGrade() > getGradeRe())
        throw Form::GradeTooLowException();
    
    std::ofstream file(target + "_Shrubbery");
    file << "                                                         .                                               .         ;  \n \
                 .              .              ;%     ;;   \n \
                   ,           ,                :;%  %;   \n \
                    :         ;                   :;%;'     .,   \n \
           ,.        %;     %;            ;        %;'    ,;\n \
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n \
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n \
               ;%;      %;        ;%;        % ;%;  ,%;'\n \
                `%;.     ;%;     %;'         `;%%;.%;'\n \
                 `:;%.    ;%%. %@;        %; ;@%;%'\n \
                    `:%;.  :;bd%;          %;@%;'\n \
                      `@%:.  :;%.         ;@@%;'   \n \
                        `@%.  `;@%.      ;@@%;         \n \
                          `@%%. `@%%    ;@@%;        \n \
                            ;@%. :@%%  %@@%;       \n \
                              %@bd%%%bd%%:;     \n \
                                #@%%%%%:;;\n \
                                %@@%%%::;\n \
                                %@@@%(o);  . '         \n \
                                %@@@o%;:(.,'         \n \
                            `.. %@@@o%::;         \n \
                               `)@@@o%::;         \n \
                                %@@(o)::;        \n \
                               .%@@@@%::;         \n \
                               ;%@@@@%::;.          \n \
                              ;%@@@@%%:;;;. \n \
                          ...;%@@@@@%%:;;;;,..    " << std::endl;
    file.close();
}