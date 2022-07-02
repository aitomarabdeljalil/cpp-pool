/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:18:11 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/02 19:11:26 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
// #include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	// Weapon club = Weapon("crude spiked club");
	// HumanA bob("Bob", club);
	// bob.attack();
	// club.setType("some other type of club");
	// bob.attack();

	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();

	return 0;
}