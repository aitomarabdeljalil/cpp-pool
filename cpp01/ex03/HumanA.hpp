/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:49:59 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/02 16:57:07 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A
# include <iostream>
# include <string>
# include "Weapon.hpp"

class Weapon;

class HumanA
{
private:
	Weapon& wa;
	std::string	name;
public:
	HumanA(std::string name, Weapon& wpa);
	void	attack(void);
	~HumanA();
};

#endif