/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:19:28 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/20 19:20:03 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    Hpoints = 100;
    Epoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& ft)
{
    this->Name = ft.Name;
    this->Hpoints = ft.Hpoints;
    this->Epoints = ft.Epoints;
    this->AttackDamage = ft.AttackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    this->Name = other.Name;
    this->Hpoints = other.Hpoints;
    this->Epoints = other.Epoints;
    this->AttackDamage = other.AttackDamage;
    return *this;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "Positive high Five request." << std::endl; 
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called." << std::endl;
}
