NAME	:= Harl
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= 	main.cpp\
			Harl.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

$(NAME): Harl.hpp $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)