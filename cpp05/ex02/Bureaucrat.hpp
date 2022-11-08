/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:21:02 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/08 17:18:29 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat(std::string Name, int Grade);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(const Form& fr);
        void excuteForm(Form const & form);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is Too High!";
                }
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is Too Low!";
                }
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& br);

#endif