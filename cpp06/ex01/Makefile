NAME	:= ReinterpretCast
CC		:= c++
CFLAGE	:= -Wall -Wextra -Werror -std=c++98
SRC		:= 	main.cpp\
			Data.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY	: all clean fclean re

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

%.o: %.cpp Data.hpp
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): Data.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)