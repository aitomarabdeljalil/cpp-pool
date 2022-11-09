/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:14:06 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/09 16:59:20 by aait-oma         ###   ########.fr       */
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
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << std::endl;
        //increment or decrement the grade
        b1.incrementGrade();
        b2.incrementGrade();
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << std::endl;
        Bureaucrat b3("b3", 149);
        std::cout << b3 << std::endl;
        //hundling error
        b3.decrementGrade();
        std::cout << b3 << std::endl;
        b3.decrementGrade();
        std::cout << b3 << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}