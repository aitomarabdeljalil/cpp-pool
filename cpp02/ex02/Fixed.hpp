/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:32:43 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/27 22:23:53 by aait-oma         ###   ########.fr       */
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
    static Fixed& min(Fixed& f, Fixed& g);
    static Fixed& max(Fixed& f, Fixed& g);
    static Fixed const & min(const Fixed&  f, const Fixed&  g);
    static Fixed const & max(const Fixed& f, const  Fixed&  g);
    Fixed& operator=(const Fixed& other);
    Fixed operator+(const Fixed& other);
    Fixed operator*(const Fixed& other);
    Fixed operator/(const Fixed& other);
    Fixed operator-(const Fixed& other);
    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed& operator--(void);
    Fixed operator--(int);
    bool operator==(Fixed const &f1) const;
    bool operator!=(Fixed const &f1) const;
    bool operator>=(Fixed const &f1) const;
    bool operator<=(Fixed const &f1) const;
    bool operator>(Fixed const &f1) const;
    bool operator<(Fixed const &f1) const;
    int getRawBits( void ) const;
    void setRawBite( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};

std::ostream& operator<< (std::ostream& os, const Fixed& fixed);

#endif