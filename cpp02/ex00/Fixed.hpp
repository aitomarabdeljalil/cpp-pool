/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:46:11 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/27 18:04:37 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
private:
    int fixe;
    static const int fractp = 8;
public:
    Fixed();
    Fixed(const Fixed& f);
    Fixed& operator=(const Fixed& f);
    ~Fixed();
    int getRawBite( void ) const;
    void setRawBite(int const raw)
};

Fixed::Fixed()
{
    fixe = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
    fixe = f.fixe;
    fractp = f.fixe;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBite() const
{

    return this->fixe;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->fix_p = other.getRawBits();
    return *this;   
}

void setRawBite(int const raw)
{
        
}

#endif