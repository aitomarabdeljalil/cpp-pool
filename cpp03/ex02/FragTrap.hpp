/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:33:49 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/18 19:03:08 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string Name);
    void highFivesGuys( void );
    ~FragTrap();
};

FragTrap::FragTrap(/* args */)
{
}

void FragTrap::highFivesGuys( void )
{
    
}

FragTrap::~FragTrap()
{
}


#endif