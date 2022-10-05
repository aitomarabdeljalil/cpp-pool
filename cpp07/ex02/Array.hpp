/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:22:15 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/05 18:55:18 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
private:
    unsigned int _size;
    T *myarray;
public:
    Array();
    Array(unsigned int n);
    void setMyarray();
    int size();
    T & operator[](unsigned int i) const;
    ~Array();
};

template <typename T>
Array<T>::Array()
{
    this->size = 0;
    myarray = NULL;
    std::cout << "** Default Constructor is called **" << std::endl;
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
    if (n > 0)
        myarray = new T[_size];
    else
        throw std::length_error("invalid size");
    std::cout << "** Constructor is called **" << std::endl;
}

template <typename T>
void Array<T>::setMyarray()
{
    // for (int i = 0; i < _size; i++)
    //     ptr[i] = arr[i];
}

template <typename T>
int Array<T>::size() { return size; }

template <typename T>
Array<T>::~Array()
{
    if (this->myarray)
		delete [] myarray;
	std::cout << "** Destructor is called **" << std::endl;
}

#endif