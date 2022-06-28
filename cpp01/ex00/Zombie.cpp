/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:45:34 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/28 13:54:05 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " Destroyed;" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiinnnzzZ..." << std::endl;
}