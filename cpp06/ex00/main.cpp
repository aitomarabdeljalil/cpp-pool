/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:48:23 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/12 17:47:48 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>
#include <cmath>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "Not enough argument." << std::endl;
    else if (ac > 2)
        std::cout << "Too much arguments." << std::endl;
    else
    {
        if (ft_Cast(av[1]))
            return 1;
    }
    return 0;
}