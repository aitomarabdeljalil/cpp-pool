/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:07:01 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/23 14:36:08 by aait-oma         ###   ########.fr       */
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
    std::string& operator[] (int i)
    {
        return ideas[i];
    };
    ~Brain();
};

Brain::Brain()
{
    std::cout << "Brain Default Constructor called." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Default Destructor called." << std::endl;
}


#endif
