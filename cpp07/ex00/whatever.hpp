/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:24:58 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/22 18:42:42 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T a, T b)
{
    return a < b ? a : b;
}

template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

#endif