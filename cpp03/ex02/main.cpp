/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:52:02 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/28 16:29:24 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap f1("F1");
    FragTrap f2("F2");
    
    f1.attack("F2");
    f2.takeDamage(5);
    f1.highFivesGuys();
    f2.beRepaired(5);
    return 0;
}