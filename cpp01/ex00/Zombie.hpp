/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:55:05 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/28 15:07:33 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name);
	~Zombie();
	void announce( void );
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif