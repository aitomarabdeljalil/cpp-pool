/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:06:57 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/02 19:17:22 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon *wb;
	std::string	name;
public:
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon &wb);
};

#endif