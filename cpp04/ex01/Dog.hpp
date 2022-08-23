/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:13:53 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/23 14:41:11 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* br;
public:
    Dog();
    void makeSound() const;
    ~Dog();
};


#endif