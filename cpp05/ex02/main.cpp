/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:35:08 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/09 12:56:52 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        // first test :
        std::cout << "first test : \n";
        ShrubberyCreationForm SHform("1337");

        Bureaucrat a("a", 120);
        a.executeForm(SHform);

        Bureaucrat b("b", 145);

        b.signForm(SHform);
        b.executeForm(SHform);
        a.executeForm(SHform);
        /////
        // second test :
        std::cout << "second test : \n";
        Bureaucrat aa("aa", 20);
        RobotomyRequestForm RBform("me");
        aa.signForm(RBform);
        aa.executeForm(RBform);
        /////
        // second test :
        std::cout << "third test : \n";
        Bureaucrat aaa("aa", 5);
        PresidentialPardonForm PRform ("ilias");
        aaa.signForm(PRform);
        aaa.executeForm(PRform);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}