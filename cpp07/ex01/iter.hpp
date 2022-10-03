/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:00:40 by aait-oma          #+#    #+#             */
/*   Updated: 2022/09/15 15:00:19 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template <typename T>
void    iter(T *array, int len, void (*f)(T *))
{
    int    i;

    i = 0;
    if (array) {
        while (i < len) {
            (f)(array + i);
            i++;
        }
    }
}

void fun(int *s);

#endif