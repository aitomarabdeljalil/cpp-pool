/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:46:11 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/25 18:43:45 by aait-oma         ###   ########.fr       */
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
    ~Fixed();
};

Fixed::Fixed(/* args */)
{
}

Fixed::~Fixed()
{
}


#endif