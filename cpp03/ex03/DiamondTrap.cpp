/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:57:12 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/30 21:57:38 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap()
{
    this->_name = "";
    ClapTrap::Name = _name + "_clap_name";
    this->Epoints = getEnergyP();
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "clap_name"), FragTrap()
{
    this->_name = _name;
    ClapTrap::Name = _name + "_clap_name";
    this->Epoints = getEnergyP();
    std::cout << "DiamondTrap Constructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->_name << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}
