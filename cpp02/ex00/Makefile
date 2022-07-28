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

$(NAME): Fixed.hpp $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)