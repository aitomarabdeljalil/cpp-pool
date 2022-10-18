/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:10:26 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/18 12:44:16 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	int N = 2;
	Zombie *z = zombieHorde(N, "sts");
	for (int i = 0; i < N; i++)
		z[i].announce();
	delete[] z;
    return 0;
}
