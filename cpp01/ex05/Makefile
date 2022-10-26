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

%.o: %.cpp
	$(CC) $(CFLAGE) -c -o $@ $<

$(NAME): Harl.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)