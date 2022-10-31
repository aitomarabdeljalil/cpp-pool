/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:57:18 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/31 20:50:54 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <algorithm>
# include <exception>
# include <iostream>
# include <vector>

class Span
{
private:
    std::vector<int>    v; 
    unsigned int        N;
    int                 i;
public:
    int size() {return N;}
    Span();
    Span(unsigned int _N);
    void addNumber(int nbr);
    ~Span();
};

Span::Span()
{
}

Span::Span(unsigned int _N) : v(_N), N(_N), i(0)
{
}

void Span::addNumber(int nbr)
{
    if (i < size())
    {
        v[i] = nbr;
        i++;
    }
    else
        throw "Out of range.";
    
}

Span::~Span()
{
    
}


#endif