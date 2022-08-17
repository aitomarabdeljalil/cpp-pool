/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:46:09 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/17 19:46:47 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->Hpoints > 0 && this->Epoints > 0)
    {
        this->Epoints--;
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing ";
        std::cout << this->AttackDamage << " points of damage !" << std::endl;
    }
}

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
    this->Name = "";
    this->Hpoints = 100;
    this->Epoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
    this->Name = Name;
    this->Hpoints = 100;
    this->Epoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& st)
{
    Name = st.Name;
    Hpoints = st.Hpoints;
    Epoints = st.Epoints;
    AttackDamage = st.AttackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    this->Name = other.Name;
    this->Hpoints = other.Hpoints;
    this->Epoints = other.Epoints;
    this->AttackDamage = other.AttackDamage;
    return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}
