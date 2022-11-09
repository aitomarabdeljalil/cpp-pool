/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:31:11 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/09 13:01:08 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();

    void execute(Bureaucrat const & executor) const;
};

int getRandom();
#endif