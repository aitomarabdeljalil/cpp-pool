NAME	:= EasyFind
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= 	main.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp easyfind.hpp
	$(CC) $(CFLAGE) -c -o $@ $<

$(NAME): easyfind.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)