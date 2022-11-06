/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:21:25 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/06 20:34:58 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Default Constructor called." << std::endl;
}

Dog::Dog(const Dog& d)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->type = d.getType();
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if(this != &other)
        this->type = other.getType();
    return *this; 
}

void Dog::makeSound() const
{
    std::cout << "woof, woof." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Default Destructor called." << std::endl;
}