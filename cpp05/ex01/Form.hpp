/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:58:13 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/10 18:26:46 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        std::string const _Name;
        bool _Signed;
        const int _GradeRs;
        const int _GradeRe;
    public:
        Form();
        Form(const Form& fr);
        Form& operator=(const Form& fr);
        Form(std::string Name, int GradeRs, int GradeRe);
        std::string getName() const;
        int getGradeRs() const;
        int getGradeRe() const;
        bool getSigned() const;
        void beSigned(const Bureaucrat& br);
        ~Form();

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

std::ostream& operator<<(std::ostream& os, const Form& fr);

#endif