/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:22:39 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/15 16:19:45 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string Name);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};

void ScavTrap::guardGate()
{
    
}

ScavTrap::ScavTrap(std::string Name)
{
    this->Name = Name;
    this->Hpoints = 100;
    this->Epoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
}

#endif