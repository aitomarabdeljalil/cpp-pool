/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:32:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/29 18:33:46 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
    int fixe;
    static const int fractp = 8;
public:
    Fixed();
    Fixed( const Fixed& f );
    Fixed( const int nb );
    Fixed& operator=( const Fixed& f );
    int getRawBits( void ) const;
    void setRawBite( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};

Fixed::Fixed( const int nb )
{
    std::cout << "Int constructor called" << std::endl;
    fixe = nb << fractp;
}

Fixed::Fixed( const float nb )
{
    std::cout << "f constructor called" << std::endl;
    fixe = roundf(nb / (1 << fractp));
}

int Fixed::toInt( void ) const
{
    return fixe >> fractp;
}

#endif