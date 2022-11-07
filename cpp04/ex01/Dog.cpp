/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:41:22 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/07 11:31:37 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor called." << std::endl;
    this->type = "Dog";
    br = new Brain();
}

Dog::Dog(const Dog& d)
{
    std::cout << "Dog Copy constructor called." << std::endl;
    this->type = d.getType();
    br = new Brain();
    *br = *d.br;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment operator called." << std::endl;
    delete this->br;
    this->br = new Brain();
    this->type = other.getType();
    *br = *other.br;
    return *this; 
}

void Dog::makeSound() const
{
    std::cout << "woof, woof." << std::endl;
}

Dog::~Dog()
{
    delete this->br;
    std::cout << "Dog Default Destructor called." << std::endl;
}
