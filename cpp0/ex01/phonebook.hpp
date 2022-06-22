/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 05:36:54 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/22 15:15:07 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include "contact.hpp"

class Phonebook {
	private:
		Contact list[8];
		int len;
		int pos;
	public:
		Phonebook();
		bool ft_addContact(Contact c);
		void ft_search(int index);
		void printPhonebook();
};
#endif