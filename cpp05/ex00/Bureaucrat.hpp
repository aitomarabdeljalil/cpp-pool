/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:21:02 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/28 15:26:06 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat(std::string Name);
        ~Bureaucrat();
        std::string getName() const;
        class GradeTooHighException : public std::exception
        {
            public:
                
        };
};

Bureaucrat::Bureaucrat(std::string Name) : _name(Name) {}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

Bureaucrat::~Bureaucrat()
{
}


#endif