/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:31:46 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/02 19:15:07 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string Weapon::getType()
{
	return (type);
}
void Weapon::setType(std::string type)
{
	this->type = type;
}