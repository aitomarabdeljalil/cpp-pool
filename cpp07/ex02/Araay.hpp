/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Araay.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:22:15 by aait-oma          #+#    #+#             */
/*   Updated: 2022/09/19 11:34:19 by aait-oma         ###   ########.fr       */
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
    Araay(/* args */);
    void setMyarray();
    int size();
    ~Araay();
};

template <typename T>
Araay::Araay()
{
}

template <typename T>
Araay::Araay(unsigned int n)
{
    size = n;
    myarray = new T[size];
}

template <typename T>
void Araay::setMyarray()
{
    
}

template <typename T>
void Araay::size()
{
    
}

template <typename T>
Araay::~Araay()
{
}

#endif