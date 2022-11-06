/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:07:01 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/06 22:15:29 by aait-oma         ###   ########.fr       */
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
    // std::string& operator[] (int i)
    // {
    //     return ideas[i];
    // };
    Brain& operator=(const Brain& other);
    Brain(const Brain& b);
    ~Brain();
    std::string *get_idea() const;
};

#endif
