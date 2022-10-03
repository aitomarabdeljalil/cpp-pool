/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:00:40 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/03 11:42:01 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

// template <typename T>
// void print( T const & x ) 
// { 
//     std::cout << x << std::endl; return; 
// }

template <class T>
void    iter(T *array, int len, void (*f)(T const &))
{
    int    i;

    i = 0;
    if (array) {
        while (i < len) {
            (f)(array[i]);
            i++;
        }
    }
}

#endif