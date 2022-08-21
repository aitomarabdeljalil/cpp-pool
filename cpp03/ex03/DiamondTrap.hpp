/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:27:33 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/21 19:47:34 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
# define DIAMOND_HP
# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap();
    using ScavTrap::attack;
    DiamondTrap(std::string _name);
    void whoAmI();
    ~DiamondTrap();
};

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap()
{
    this->_name = "";
    this->Epoints = getEnergyP();
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "clap_name"), FragTrap()
{
    this->_name = _name;
    this->Epoints = getEnergyP();
    std::cout << "DiamondTrap Constructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->_name << " and my ClapTrap name is " << this->Name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}


#endif