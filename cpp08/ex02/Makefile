NAME	:= mstack
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= 	main.cpp

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp MutantStack.hpp
	$(CC) $(CFLAGE) -c -o $@ $<

$(NAME): MutantStack.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)