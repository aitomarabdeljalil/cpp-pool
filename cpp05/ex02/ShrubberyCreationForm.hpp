/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:10:42 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/07 21:30:25 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();
    
    void execute(Bureaucrat const & executor) const;
};

#endif