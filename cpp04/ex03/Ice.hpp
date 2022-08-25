/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:00:05 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/25 18:58:09 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Ice();
};

Ice::Ice() : AMateria("ice") {}

AMateria* Ice::clone() const
{
    AMateria *obj = new Ice();
    return obj;
}

void Ice::use(ICharacter& target)
{
    
}

Ice::~Ice()
{
}


#endif
