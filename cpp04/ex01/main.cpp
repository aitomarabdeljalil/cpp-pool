/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:30:27 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/07 11:33:23 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define ANIMAL_COUNT 10

int main(void)
{
	{
		Animal	*animals[ANIMAL_COUNT];

		for (int i = 0; i < ANIMAL_COUNT; i++)
		{
			if (i < ANIMAL_COUNT / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			std::cout << animals[i]->getType() << std::endl;
		}
		for (int i = 0; i < ANIMAL_COUNT; i++)
			delete animals[i];
	}
	
    
    {
		Cat basic;
		Cat a = Cat(basic);
        Cat tmp = basic;	
    }
	
	// system("leaks Animal");
    return 0;
}