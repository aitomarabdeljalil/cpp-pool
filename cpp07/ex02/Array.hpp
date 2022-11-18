/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:22:15 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/14 08:24:53 by aait-oma         ###   ########.fr       */
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
    Array()
    {
        std::cout << "** Default Constructor is called **" << std::endl;
        this->size = 0;
        myarray = NULL;
    }

    Array(const Array& ar)
    {
        std::cout << "** Copy Constructor is called **" << std::endl;
        this->myarray = new T [ar.size()] ();
        this->_size = ar.size();
        for (int i = 0; i < this->size(); i++)
            this->myarray[i] = ar[i];
    }

    Array& operator=(const Array& ar)
    {
        std::cout << "** Copy assignment operator is called **" << std::endl;
        myarray = !myarray ? new T [ar.size()] () : myarray;
        this->_size = ar.size();
        for (int i = 0; i < this->size; i++)
            this->myarray[i] = ar[i];
        return *this;
    }

    T& operator[] (unsigned int i) const
    {
        if (i > this->size())
            throw std::length_error("Out of Bounds");	
        return this->myarray[i];
    }

    Array(int n)
    {
        std::cout << "** Constructor is called **" << std::endl;
        _size = n;
        myarray = n >= 0 ? new T[_size]() : throw std::length_error("invalid size");
    }

    int size() const { return _size; }

    ~Array()
    {
        std::cout << "** Destructor is called **" << std::endl;
        if (this->myarray)
            delete [] myarray;
    }
};

#endif