/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:13:53 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/22 18:42:04 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    void makeSound() const;
    ~Dog();
};

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Default Constructor called." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "woof, woof." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Default Destructor called." << std::endl;
}


#endif