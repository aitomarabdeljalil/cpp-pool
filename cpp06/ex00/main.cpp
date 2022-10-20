/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:48:23 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/19 12:48:23 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void printRes(char c, int n, float f, double d)
{
    if (std::isnan(f) || std::isnan(d) || std::isinf(f) || std::isinf(d))
    {
        std::cout << "char: impossible\nint: impossible" << std::endl;
    }
    else
    {
        std::cout << "char: " << (isprint(c)) ? c : "Non displayable" << std::endl;
        std::cout << "int: " << n << std::endl;
        if (f - std::floor(f))
            std::cout << "float: " << f + "f" << std::endl; << "double: " << d << std::endl;
        else
            std::cout << "float: " << f + ".0f" << std::endl; << "double: " << d + ".0" << std::endl;
    }
}

bool HandelInt(std::string str)
{
    int n;
    size_t idx,
    n = std::stoi(n, &idx);
    if (idx != str.size())
        return false;
    char c = static_cast<char>(n);
    float f = static_cast<float>(n);
    double d = static_cast<double>(n);
    printRes(c, n, f, d);
    return true;
}

bool HandelFloat(std::string str)
{
    float f;
    size_t idx,
    n = std::stof(f, &idx);
    if (idx != str.size())
        return false;
    char c = static_cast<char>(f);
    int n = static_cast<int>(f);
    double d = static_cast<double>(f);
    printRes(c, n, f, d);
    return true;
}

bool HandelDouble(std::string str)
{
    double d;
    size_t idx,
    n = std::stod(d, &idx);
    if (idx != str.size())
        return false;
    char c = static_cast<char>(d);
    float f = static_cast<float>(d);
    int n = static_cast<int>(d);
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