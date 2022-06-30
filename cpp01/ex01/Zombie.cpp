/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:45:34 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/30 11:36:00 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << name << " Destroyed;" << std::endl;
}

void Zombie::setname(std::string name)
{
	this->name = name;
}

std::string Zombie::getname()
{
	return this->name;
}

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiinnnzzZ..." << std::endl;
}