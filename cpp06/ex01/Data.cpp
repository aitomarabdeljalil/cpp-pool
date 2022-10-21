/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:41:06 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/21 16:26:09 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
}


Data::Data(int _x, char _y, bool _z)
{
    this->x = _x;
    this->y = _y;
    this->z = _z;
}

int Data::getX() const { return this->x; }
char Data::getY() const { return this->y; }
bool Data::getZ() const { return this->z; }

void Data::setX(int _x) 
{
    this->x = _x;
}

void Data::setY(char _y) 
{
    this->y = _y;
}

void Data::setZ(bool _z) 
{
    this->z = _z;
}

Data::~Data()
{
}

uintptr_t serialize(Data* ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data* deserialize(uintptr_t raw)
{
    Data* ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}