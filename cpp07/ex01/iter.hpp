/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:00:40 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/22 18:42:52 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

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