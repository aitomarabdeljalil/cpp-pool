/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:22:39 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/12 19:12:38 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
private:
    /* data */
public:
    ScavTrap(/* args */);
    ~ScavTrap();
    void guardGate();
};

void ScavTrap::guardGate()
{
    
}

ScavTrap::ScavTrap(/* args */)
{
}

ScavTrap::~ScavTrap()
{
}


#endif