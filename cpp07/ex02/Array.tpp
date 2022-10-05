/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:34:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/05 13:32:12 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    this->size = 0;
    myarray = NULL;
}

template <typename T>
T& Array<T>::operator[] (unsigned int i) const
{
    if (i < 0 || i > this->size())
		throw std::length_error("Out of Bounds");	
    return this->myarray[i];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    if (n != 0)
        myarray = new T[_size];
}

template <typename T>
void Array<T>::setMyarray()
{
    
}

template <typename T>
int Array<T>::size() { return size; }

template <typename T>
Array<T>::~Array()
{
}