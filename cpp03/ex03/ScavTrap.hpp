/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:22:39 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/17 19:46:41 by aait-oma         ###   ########.fr       */
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
	ScavTrap();
    ScavTrap(std::string Name);
    ScavTrap(const ScavTrap& st);
    ScavTrap& operator=(const ScavTrap &other);
    void attack(const std::string& target);
    void guardGate();
    ~ScavTrap();
};

#endif