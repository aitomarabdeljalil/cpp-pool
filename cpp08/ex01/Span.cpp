/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:16:26 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/01 18:57:08 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int _N) : v(_N), N(_N), i(0) {}

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
int Span::size() { return N; }

int Span::shortestSpan()
{
    int min;
    int diff;

    if (N >= 2)
    {
        std::sort(v.begin(), v.end());
        min = v[1] - v[0];
        for (int i = 2; i < N; i++)
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
    if (N < 2)
        throw "Error!";
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    return (max - min);
}

template <typename InputIterator>
void Span::addRange(InputIterator begin, InputIterator end)
{
//     for (;begin != end; begin++) 
//         addNumber(*begin);
}


Span::~Span() {}