/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:53:54 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/24 19:28:54 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ){std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;}
void Harl::info( void ){std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;}
void Harl::warning( void ){std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;}
void Harl::error( void ){std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;}

typedef void (Harl::*t_mem)(void);

void Harl::complain( std::string level ) {
	t_mem	members[4] = {&Harl::debug,&Harl::info ,&Harl::warning ,&Harl::error};
	std::string					levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int expression = 5;

	for (int i = 0; i <= 3; i++)
		if (level == levels[i])
			expression = i;
	switch (expression)
	{
		case 0:
		{
			std::cout << "[DEBUG]" << std::endl;
			(this->*members[0])();
			std::cout << std::endl;
			std::cout << "[INFO]" << std::endl;
			(this->*members[1])();
			std::cout << std::endl;
			std::cout << "[WARNING]" << std::endl;
			(this->*members[2])();
			std::cout << std::endl;
			std::cout << "[ERROR]" << std::endl;
			(this->*members[3])();
			std::cout << std::endl;
			break;
		}
		case 1:
		{
			std::cout << "[INFO]" << std::endl;
			(this->*members[1])();
			std::cout << std::endl;
			std::cout << "[WARNING]" << std::endl;
			(this->*members[2])();
			std::cout << std::endl;
			std::cout << "[ERROR]" << std::endl;
			(this->*members[3])();
			std::cout << std::endl;
			break;
		}
		case 2:
		{
			std::cout << "[WARNING]" << std::endl;
			(this->*members[2])();
			std::cout << std::endl;
			std::cout << "[ERROR]" << std::endl;
			(this->*members[3])();
			std::cout << std::endl;
			break;
		}
		case 3:
		{
			std::cout << "[ERROR]" << std::endl;
			(this->*members[3])();
			std::cout << std::endl;
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
