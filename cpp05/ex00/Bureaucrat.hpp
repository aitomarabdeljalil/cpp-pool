/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:21:02 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/09 14:58:48 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string Name, int Grade);
        Bureaucrat(const Bureaucrat& br);
        Bureaucrat& operator=(const Bureaucrat& br);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Grade is Too High!";
                }
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Grade is Too Low!";
                }
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br);

#endif