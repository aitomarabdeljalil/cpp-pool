/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:57:03 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/06 21:25:12 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const WrongAnimal* meta1 = new WrongAnimal();
        const WrongAnimal* i1 = new WrongCat();
        std::cout << i1->getType() << " " << std::endl;
        i1->makeSound();
        meta1->makeSound();   
    }
    std::cout << "--------------------------" << std::endl;
    {
        const Animal* meta2 = new Animal();
        const Animal* j2 = new Dog();
        const Animal* i2 = new Cat();
        std::cout << j2->getType() << " " << std::endl;
        std::cout << i2->getType() << " " << std::endl;
        i2->makeSound(); //will output the cat sound!
        j2->makeSound();

        meta2->makeSound();   
    }

    return 0;
}