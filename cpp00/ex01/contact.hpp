/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 05:18:24 by aait-oma          #+#    #+#             */
/*   Updated: 2022/06/21 14:38:56 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string Secret;
	public:
		std::string getFname();
		std::string getLname();
		std::string getNname();
		std::string getNphone();
		std::string getSecret();
		void setFname(std::string fname);
		void setLname(std::string lname);
		void setNname(std::string nname);
		void setNphone(std::string nphone);
		void setSecret(std::string secr);
		bool isValid();
};
#endif