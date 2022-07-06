/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:39:27 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/06 21:23:56 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:36:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/06 21:17:16 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug( void ){std::cout << "debug";}
void Harl::info( void ){std::cout << "info";}
void Harl::warning( void ){std::cout << "warning";}
void Harl::error( void ){std::cout << "error";}

typedef void (Harl::*t_mem)(void);

void Harl::complain( std::string level ) {
	t_mem	members[4] = {&Harl::debug,&Harl::info ,&Harl::warning ,&Harl::error};
	std::string					levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int							i = 0;

	while (level != levels[i])
		i++;
	if (i != 4)
		(this->*members[i])();
}
