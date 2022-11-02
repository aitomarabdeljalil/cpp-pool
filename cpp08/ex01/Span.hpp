/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:57:18 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/02 11:54:33 by aait-oma         ###   ########.fr       */
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
    typedef int &               reference;
    typedef unsigned int       size_type;
    std::vector<int>    v;
    int                 i;
public:
    Span();
    Span(unsigned int _N);
    int size();
    int shortestSpan();
    int longestSpan();
    reference operator[] (size_type n) {return v[n];}
    void addNumber(int nbr);
    template <typename InputIterator>
    void addRange(InputIterator begin, InputIterator end)
    {
        for (;begin != end; begin++) 
            addNumber(*begin);
    }
    ~Span();
};

#endif