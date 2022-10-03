/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Araay.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:22:15 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/03 18:46:21 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAU_HPP
# include <iostream>

template <typename T>
class Araay
{
private:
    unsigned int size;
    T *myarray;
public:
    Araay();
    Araay(unsigned int n);
    void setMyarray();
    int size();
    T & operator[](unsigned int i) const;
    ~Araay();
};

template <typename T>
Araay<T>::Araay()
{
    
}

template <typename T>
T& Array<T>::operator[] (unsigned int i) const
{
    if (i > this->size())
		throw (outOfLimits());	
    return this->_array[i];
}

template <typename T>
Araay<T>::Araay(unsigned int n)
{
    size = n;
    if (n != 0)
        myarray = new T[size];
}

template <typename T>
void Araay<T>::setMyarray()
{
    
}

template <typename T>
int Araay<T>::size() { return size; }

template <typename T>
Araay<T>::~Araay()
{
}

#endif