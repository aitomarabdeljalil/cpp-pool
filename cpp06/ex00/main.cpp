/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:46:44 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/08 13:33:18 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "convert.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "Not enough argument." << std::endl;
    else if (ac == 2)
        std::cout << "Too much arguments." << std::endl;
    else
    {
        
    }    
    return 0;
}

/*
    /convert 0
    char: Non displayable
    int: 0
    float: 0.0f
    double: 0.0
    ./convert nan
    char: impossible
    int: impossible
    float: nanf
    double: nan
    ./convert 42.0f
    char: '*'
    int: 42
    float: 42.0f
    double: 42.0
    7
*/