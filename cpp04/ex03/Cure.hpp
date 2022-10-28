/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:25:20 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/28 21:36:16 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
    Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Cure();
};

Cure::Cure() : AMateria("cure") {}

AMateria* Cure::clone() const
{
    AMateria *obj = new Cure();
    return obj;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wound *" << std::endl;
}

Cure::~Cure() {}


#endif