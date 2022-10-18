/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:55:05 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/18 12:40:56 by aait-oma         ###   ########.fr       */
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
	//Zombie();
	~Zombie();
	void announce( void );
	void setname(std::string name);
	std::string getname();
};

Zombie* zombieHorde(size_t N, std::string name);
#endif