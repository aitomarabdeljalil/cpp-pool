/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:41:22 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/17 13:14:00 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    br = new Brain();
    std::cout << "Dog Default Constructor called." << std::endl;
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
