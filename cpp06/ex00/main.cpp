/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:48:23 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/20 22:17:19 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

void printRes(char c, int n, float f, double d)
{
    if (std::isnan(f) || std::isnan(d) || std::isinf(f) || std::isinf(d))
        std::cout << "char: impossible\nint: impossible\nfloat: "<< f <<"f\ndouble: "<< d << std::endl;
    else
    {
        if (isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << n << std::endl;
        if (f - floor(f) != 0)
            std::cout << "float: " << f << "f" << std::endl << "double: " << d << std::endl;

        else
            std::cout << "float: " << f << ".0f" << std::endl << "double: " << d << ".0" << std::endl;
    }
}

bool HandelInt(char *str)
{
    double _tocast = atof(str);
    char c = static_cast<char>(_tocast);
    int n = static_cast<int>(_tocast);
    float f = static_cast<float>(_tocast);
    double d = static_cast<double>(_tocast);
    printRes(c, n, f, d);
    return true;
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "Not enough argument." << std::endl;
    else if (ac > 2)
        std::cout << "Too much arguments." << std::endl;
    else
    {
        try
        {
            if (HandelInt(av[1]))
                return 1;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    return 0;
}