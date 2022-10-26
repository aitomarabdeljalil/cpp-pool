/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:38:51 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/26 13:48:35 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->wb = NULL;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attack with their " << (!this->wb ? "" : this->wb->getType()) << std::endl;
}

void	HumanB::setWeapon(Weapon &wb)
{
	this->wb = &wb;
}
