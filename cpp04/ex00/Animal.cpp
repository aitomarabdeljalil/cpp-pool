/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:50:21 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/04 18:01:32 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "";
    std::cout << "Animal Default Constructor called." << std::endl;
}

Animal::Animal(const Animal& wg)
{
    std::cout << "Copy constructor called" << std::endl;
    type = wg.getType();
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->type = other.getType();
    return *this; 
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound!!" << std::endl;
}

std::string Animal::getType() const { return this->type; }

Animal::~Animal()
{
    std::cout << "Animal Default Destructor called." << std::endl;
}
