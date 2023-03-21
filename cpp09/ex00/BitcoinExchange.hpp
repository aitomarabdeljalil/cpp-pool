/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:02:04 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/21 10:44:05 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include<iostream>
# include<fstream>
# include<string>
# include<map>
# include<list>
# include<time.h>

std::string	trim(std::string s, std::string set);
std::list<std::string>	split(std::string s, std::string delimiter);

#endif
