NAME	:= Animal
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= main.cpp\
			Animal.cpp\
			Brain.cpp\
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

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp Brain.hpp
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): Animal.hpp Cat.hpp Dog.hpp Brain.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)