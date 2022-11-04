/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:19:05 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/04 19:00:51 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor called." << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& c)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = c.getType();
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->type = other.getType();
    return *this; 
}

void WrongCat::makeSound() const
{
    std::cout << "Meow, meow." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Cat Default Destructor called." << std::endl;
}