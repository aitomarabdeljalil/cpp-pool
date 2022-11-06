/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:59:05 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/06 21:12:02 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& wg);
    Animal& operator=(const Animal &other);
    virtual void makeSound() const;
    std::string getType() const;
    virtual ~Animal();
};

#endif