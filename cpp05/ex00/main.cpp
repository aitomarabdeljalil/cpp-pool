/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:14:06 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/29 15:47:53 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1("b1", 5);
        Bureaucrat b2("b2", 2);
        //testing getters
        std::cout << b1.getName() << " : " << b1.getGrade()<< std::endl;
        std::cout << b2.getName() << " : " << b2.getGrade()<< std::endl;
        //increment or decrement the grade
        b2.incrementGrade();
        b1.incrementGrade();
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << std::endl;
        Bureaucrat b3("b3", 150);
        std::cout << b3 << std::endl;
        //hundling error
        Bureaucrat b4("b4", 0);
        b3.decrementGrade();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}