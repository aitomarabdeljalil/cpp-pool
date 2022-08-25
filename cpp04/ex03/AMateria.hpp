/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:31:00 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/25 16:22:28 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    ~AMateria();
};

AMateria::AMateria()
{
    this->type = "";
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

AMateria::~AMateria()
{
    
}



#endif