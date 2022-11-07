/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:52:04 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/07 14:33:05 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor called." << std::endl;
    this->type = "Cat";
    this->br = new Brain();
}

Cat::Cat(const Cat& c)
{
    std::cout << "Cat Copy constructor called." << std::endl;
    this->type = c.getType();
    br = new Brain();
    *br = *c.br;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignment operator called." << std::endl;
    delete this->br;
    this->br = new Brain();
    this->type = other.getType();
    *br = *other.br;
    return *this; 
}

void Cat::makeSound() const
{
    std::cout << "Meow, meow." << std::endl;
}

Cat::~Cat()
{
    delete this->br;
    std::cout << "Cat Default Destructor called." << std::endl;
}
