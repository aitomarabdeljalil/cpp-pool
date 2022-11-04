NAME	:= Animal
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= main.cpp\
			Animal.cpp\
			Dog.cpp\
			Cat.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)