/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:30:23 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/08 20:19:26 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <string>
# include <cctype>

class convert
{
private:
    std::string _input;
public:
    convert(std::string input);
    std::string getInput() const;
    bool isChar();
    bool isFloat();
    ~convert();
};

convert::convert(std::string input)
{
    this->_input = input;
}

std::string convert::getInput() const { return this->_input; }

bool convert::isChar()
{
    std::string input = getInput();
    if (input.length() == 1)
    {
        if (isprint(input[0]))
            return true;
    }
    
}

bool convert::isFloat()
{
    
}

convert::~convert()
{
}

#endif