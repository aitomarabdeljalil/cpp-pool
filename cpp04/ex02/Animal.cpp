/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:50:21 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/24 17:34:36 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called." << std::endl;
}

std::string Animal::getType() const  { return this->type; }

Animal::~Animal()
{
    std::cout << "Animal Default Destructor called." << std::endl;
}
