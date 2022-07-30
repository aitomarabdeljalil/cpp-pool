/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:32:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/30 15:37:29 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( const int nb )
{
    std::cout << "Int constructor called" << std::endl;
    // fixe = nb << fractp;
    fixe = nb * (1 << 8);
}

Fixed::Fixed( const float nb )
{
    std::cout << "f constructor called" << std::endl;
    fixe = roundf(nb / (1 << fractp));
}

int Fixed::toInt( void ) const
{
    return fixe / (1 << 8);
}

float Fixed::toFloat( void ) const
{
    return (float)this->fixe / (1 << 8);
}

std::ostream& operator<< (std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}