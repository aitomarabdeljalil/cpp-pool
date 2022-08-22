/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:52:04 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/22 18:52:35 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat Default Constructor called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow, meow." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor called." << std::endl;
}
