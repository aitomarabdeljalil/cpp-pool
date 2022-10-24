/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:32:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/24 21:07:27 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::fractp = 8;

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    fixe = 0;
}

Fixed::Fixed( const int nb )
{
    // std::cout << "Int constructor called" << std::endl;
    fixe = nb * (1 << this->fractp);
}

Fixed::Fixed( const float nb )
{
    // std::cout << "Float constructor called" << std::endl;
    fixe = (round(nb * (1 << fractp)));
}

int Fixed::toInt( void ) const
{
    return fixe / (1 << this->fractp);
}

float Fixed::toFloat( void ) const
{
    return (float)this->fixe / (1 << fractp);
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->fixe;
}

std::ostream& operator<< (std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->fixe = other.getRawBits();
    return *this;   
}

Fixed Fixed::operator+(const Fixed &f)
{
    return this->toFloat() + f.toFloat();
}

Fixed Fixed::operator*(const Fixed& f2)
{
    return this->toFloat() * f2.toFloat();
}

void Fixed::setRawBite(int const raw)
{
    this->fixe = raw;
}

Fixed::Fixed(const Fixed& f)
{
    // std::cout << "Copy constructor called" << std::endl;
    fixe = f.getRawBits();
}

Fixed& Fixed::min(Fixed& f, Fixed& g)
{
    return f.getRawBits() < g.getRawBits() ? f : g;
}

Fixed& Fixed::max(Fixed& f, Fixed& g)
{
    return f.getRawBits() > g.getRawBits() ? f : g;
}

Fixed& Fixed::min(Fixed& const f, Fixed& const g)
{
    Fixed tmp;
    if (f.fixe < g.fixe)
        tmp.fixe = f.fixe;
    else
        tmp.fixe = g.fixe;
    return tmp;
    
}

Fixed& Fixed::max(Fixed& const f, Fixed& const g)
{
    Fixed tmp;
    if (f.fixe > g.fixe)
        tmp.fixe = f.fixe;
    else
        tmp.fixe = g.fixe;
    return tmp;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}