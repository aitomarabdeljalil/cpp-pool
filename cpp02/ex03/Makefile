NAME	:= bsp
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= 	main.cpp\
			Fixed.cpp\
			Point.cpp\
			bsp.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp Fixed.hpp Point.hpp	
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): Fixed.hpp Point.hpp  $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)