/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:32:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/27 22:44:20 by aait-oma         ###   ########.fr       */
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

Fixed &Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->fixe = other.getRawBits();
    return *this;   
}
/* arithmetic operators */
Fixed Fixed::operator+(const Fixed &other)
{
    return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed &other)
{
    return this->toFloat() - other.toFloat();
}

Fixed Fixed::operator*(const Fixed& other)
{
    return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed& other)
{
    return this->toFloat() / other.toFloat();
}
/* increment/decrement */
Fixed& Fixed::operator++(void)
{
    this->fixe++;
    return (*this);
}

Fixed& Fixed::operator--(void)
{
    this->fixe--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = (*this);
    this->fixe++;
    return(tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = (*this);
    this->fixe--;
    return(tmp);
}
/*  comparison operators */
bool Fixed::operator==(Fixed const &f1) const
{
    return(this->fixe == f1.fixe);
}

bool Fixed::operator!=(Fixed const &f1) const
{
    return(this->fixe != f1.fixe);
}

bool Fixed::operator>=(Fixed const &f1) const
{
    return(this->fixe >= f1.fixe);
}

bool Fixed::operator<=(Fixed const &f1) const
{
    return(this->fixe <= f1.fixe);
}

bool Fixed::operator>(Fixed const &f1) const
{
    return(this->fixe > f1.fixe);
}

bool Fixed::operator<(Fixed const &f1) const
{
    return(this->fixe < f1.fixe);
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
    return f.fixe < g.fixe ? f : g;
}

Fixed& Fixed::max(Fixed& f, Fixed& g)
{
    return f.fixe > g.fixe ? f : g;
}

Fixed const & Fixed::min(const Fixed&  f, const Fixed&  g)
{
    return f.fixe < g.fixe ? f : g;
}

Fixed const &  Fixed::max(const Fixed&  f, const Fixed&  g)
{
    return f.fixe > g.fixe ? f : g;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}