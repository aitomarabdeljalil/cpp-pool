# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 12:35:09 by aait-oma          #+#    #+#              #
#    Updated: 2022/10/24 12:37:17 by aait-oma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Fixed
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= 	main.cpp\
			Fixed.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): Fixed.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)