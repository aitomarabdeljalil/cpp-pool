NAME	:= convert
CC		:= c++
CFLAGE	:= -Wall -Wextra -Werror -std=c++98
SRC		:= main.cpp tools.cpp

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY	: all clean fclean re

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

%.o: %.cpp Convert.hpp
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): Convert.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)