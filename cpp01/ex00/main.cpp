/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:10:26 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/28 15:46:08 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
	Zombie *z = newZombie("test2");
	z->announce();
    randomChump("test1");
	delete z;
    return 0;
}