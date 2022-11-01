/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:57:18 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/01 18:55:50 by aait-oma         ###   ########.fr       */
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
    Span();
    Span(unsigned int _N);
    int size();
    int shortestSpan();
    int longestSpan();
    void addNumber(int nbr);
    template <typename InputIterator>
    void addRange(InputIterator begin, InputIterator end);
    ~Span();
};

#endif