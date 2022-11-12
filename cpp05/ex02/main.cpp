/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:35:08 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/11 15:24:06 by aait-oma         ###   ########.fr       */
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
        std::cout <<"-------------------------------" <<std::endl;
        std::cout << "first test : \n";
        ShrubberyCreationForm SHform("1337");

        Bureaucrat a("a", 140);
        a.executeForm(SHform);

        Bureaucrat b("b", 1);

        SHform.beSigned(b);
        b.signForm(SHform);
        b.executeForm(SHform);
        a.executeForm(SHform);
        /////
        std::cout <<"-------------------------------" <<std::endl;
        // second test :
        std::cout << "second test : \n";
        Bureaucrat aa("aa", 20);
        RobotomyRequestForm RBform("me");
        RBform.beSigned(aa);
        aa.signForm(RBform);
        aa.executeForm(RBform);
        /////
        std::cout <<"-------------------------------" <<std::endl;
        //second test :
        std::cout << "third test : \n";
        Bureaucrat aaa("aa", 5);
        PresidentialPardonForm PRform ("aoa");
        PRform.beSigned(aaa);
        aaa.signForm(PRform);
        aaa.executeForm(PRform);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}