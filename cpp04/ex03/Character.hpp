/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:08:46 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/27 13:13:15 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    /* data */
public:
    Character(/* args */);
    ~Character();
};

Character::Character(/* args */)
{
}

Character::~Character()
{
}


#endif