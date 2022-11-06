/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:03:56 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/06 22:17:02 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called." << std::endl;
}

Brain::Brain(const Brain& b)
{
    std::cout << "Copy constructor called" << std::endl;
    // for (int i = 0; i < 100; i++)
	// 	    this->ideas[i] = b.ideas[i];
    *this = b;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
        for (int i = 0; i < 100; i++) {
		    this->ideas[i] = other.ideas[i];
        }
    return *this; 
}

Brain::~Brain()
{
    std::cout << "Brain Default Destructor called." << std::endl;
}

std::string *Brain::get_idea() const{
    return ((std::string *)(this->ideas));
}