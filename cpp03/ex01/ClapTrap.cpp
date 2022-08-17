/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:57:21 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/17 17:14:13 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    Hpoints = 10;
    Epoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
    this->Name = Name;
    Hpoints = 10;
    Epoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
    Name = ct.Name;
    Hpoints = ct.Hpoints;
    Epoints = ct.Epoints;
    AttackDamage = ct.AttackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    this->Name = other.Name;
    this->Hpoints = other.Hpoints;
    this->Epoints = other.Epoints;
    this->AttackDamage = other.AttackDamage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Hpoints > 0 && this->Epoints > 0)
    {
        this->Epoints--;
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing ";
        std::cout << this->AttackDamage << " points of damage !" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hpoints > 0 && this->Epoints > 0)
    {
        this->Hpoints += amount;
        this->Epoints--;
        std::cout << "ClapTrap " << this->Name << " repaired itself, Hit points = ";
        std::cout << this->Hpoints << " and Energy points = " << this->Epoints << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hpoints > 0)
    {
        if (this->Hpoints > amount)
            this->Hpoints -= amount;
        else
            this->Hpoints = 0;
        std::cout << "ClapTrap " << this->Name << " has taked " << amount << " damage, Hit points = ";
        std::cout << this->Hpoints << " and Energy points = " << this->Epoints << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}
