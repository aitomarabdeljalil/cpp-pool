/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:07:01 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/24 18:32:13 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain & obj);
    Brain & operator=(const Brain & obj);
    std::string & operator[] (int i);
    const std::string & operator[] (int i) const;
    ~Brain();
};

Brain::Brain()
{
    std::cout << "Brain Default Constructor called." << std::endl;
}

Brain::Brain(const Brain & obj)
{
    for (int i = 0; i < 100; i++)
        (*this)[i] = obj[i];
    std::cout << "Brain Default Constructor called." << std::endl;
}

Brain & Brain::operator=(const Brain & obj)
{
    if(this != &obj)
        new (this) Brain(obj);
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Default Destructor called." << std::endl;
}

std::string & Brain::operator[] (const int i)
{
    return ideas[i];
}

const std::string & Brain::operator[] (const int i) const 
{
    return ideas[i];
}



#endif
