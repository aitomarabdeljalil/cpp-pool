/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:03:00 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/04 18:03:37 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "wrong Animal";
    std::cout << "Wrong Animal Default Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wg)
{
    std::cout << "Copy constructor called" << std::endl;
    type = wg.getType();
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->type = other.getType();
    return *this; 
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal Default Destructor called." << std::endl;
}

