/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:16:26 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/02 11:56:25 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): v(0), i(0) {}

Span::Span(unsigned int _N) : v(_N), i(0) {}

void Span::addNumber(int nbr)
{
    v.at(i) = nbr;
    i++;
}
int Span::size() { return v.size(); }

int Span::shortestSpan()
{
    int min;
    int diff;

    if (size() >= 2)
    {
        std::sort(v.begin(), v.end());
        min = v[1] - v[0];
        for (int i = 2; i < size(); i++)
        {
            diff = v[i + 1] - v[i];
            if (diff < min)
                min = diff;   
        }
        return min;
    }
    throw "Error!";
}

int Span::longestSpan()
{
    if (size() < 2)
        throw "Error!";
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    return (max - min);
}


Span::~Span() {}