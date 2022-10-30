/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:02:56 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/30 19:45:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
protected:
    std::string Name;
    int         Hpoints;
    int         Epoints;
    int         AttackDamage;
public:
    ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(const ClapTrap& ct);
    ClapTrap& operator=(const ClapTrap &other);
    int getEponts(void)
    {
        return(this->Epoints);
    }
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

#endif