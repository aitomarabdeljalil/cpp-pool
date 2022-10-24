/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:32:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/24 12:48:49 by aait-oma         ###   ########.fr       */
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
    static const int fractp;
public:
    Fixed();
    Fixed( const Fixed& f );
    Fixed( const int nb );
    Fixed( const float nb );
    Fixed& operator=( const Fixed& f );
    int getRawBits( void ) const;
    void setRawBite( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};

std::ostream& operator<< (std::ostream& os, const Fixed& fixed);

#endif