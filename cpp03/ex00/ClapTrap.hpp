/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:02:56 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/10 19:16:55 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
private:
    std::string Name;
    int         Hpoints;
    int         Epoints;
    int         AttackDamage;
public:
    ClapTrap(std::string Name);
    ClapTrap(const ClapTrap& ct);
    ClapTrap &ClapTrap::operator=(const ClapTrap &other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Default constructor called" << std::endl;
    this->Name = Name;
    Hpoints = 10;
    Epoints = 10;
    AttackDamage = 0;
}

// ClapTrap::ClapTrap(const ClapTrap& ct)
// {
//     this
// }

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
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage !" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hpoints > 0 && this->Epoints > 0)
    {
        this->Hpoints += amount;
        this->Epoints--;
        std::cout << "ClapTrap " << this->Name << " repaired itself ." << std::endl;
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
        std::cout << "ClapTrap has taked " << amount << " damage ." << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

#endif