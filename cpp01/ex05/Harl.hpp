/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:36:48 by aait-oma          #+#    #+#             */
/*   Updated: 2022/07/06 21:20:56 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
# define HARL
# include <string>
# include <iostream>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void complain( std::string level );
};

#endif