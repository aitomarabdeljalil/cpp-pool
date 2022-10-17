/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:46:44 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/11 17:47:39 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

size_t ft_strspn(const char *s1, const char *s2)
{
    unsigned int len =0;
    //return 0 if any one is NULL
    if((s1 == NULL) || (s2 == NULL))
        return len;
    //return s1 char position if found in s2
    //if not found return NULL
    while(*s1 && strchr(s2,*s1++))
        len++;
    return len;
}

std::string        getTypeOfData(char * str)
{
    if (ft_strspn(str, "0123456789.fE+") == strlen(str) && str[strlen(str) - 1] == 'f' && strchr(str, '.'))
        return "float";
    if (ft_strspn(str, "0123456789.E+") == strlen(str) && strchr(str, '.'))
        return "double";
    if (ft_strspn(str, "0123456789") == strlen(str))
        return "int";
    return "nan";
}

// bool isChar(char *str)
// {
//     if (std::strlen(str) == 1)
//     {
//         if (isprint(str[0]))
//             return true;
//     }
//     return false;
// }

// bool isFloat(char *str)
// {
//     int i = 0;
//     if (str[i] == '-')
//         i++;
//     while (str[i] >= '0' && str[i] <= '9')

//     return false;
// }

/*
    ./convert 0
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
void printConvert(char *str, std::string type)
{
    if (type == "float")
    {
        std::cout << "char: " << static_cast<char> ()
    }
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "Not enough argument." << std::endl;
    else if (ac > 2)
        std::cout << "Too much arguments." << std::endl;
    else
    {
        std::cout << static_cast<char> (0);
    }
    return 0;
}
