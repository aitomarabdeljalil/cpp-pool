/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:59:05 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/21 20:03:37 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
private:
    std::string type;
public:
    Animal();
    ~Animal();
};

Animal::Animal()
{
    std::cout << "Animal Default Constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Default Destructor called." << std::endl;
}


#endif