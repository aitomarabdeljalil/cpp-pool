NAME	:= Animal
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= main.cpp\
			Animal.cpp\
			Dog.cpp\
			Cat.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

$(NAME): Animal.hpp Cat.hpp Dog.hpp $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)