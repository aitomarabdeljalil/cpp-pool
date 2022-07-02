/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:38:51 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/02 19:17:32 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << this->name << " attack with their " << this->wb->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wb)
{
	this->wb = &wb;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}