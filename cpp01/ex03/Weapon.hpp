/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:27:53 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/30 18:38:38 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON
# include <string>

class Weapon
{
	private:
		std::string type;
	public:
		~Weapon();
		std::string getType();
		void setType(std::string type);
};



#endif