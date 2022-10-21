/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:31:36 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/21 16:23:07 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>

class Data
{
    private:
        int x;
        char y;
        bool z;
    public:
        Data();
        Data(int _x, char _y, bool _z);
        int getX() const;
        char getY() const;
        bool getZ() const;
        void setX(int _x);
        void setY(char _y);
        void setZ(bool _z);
        ~Data();
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif