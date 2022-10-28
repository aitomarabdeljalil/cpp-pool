NAME	:= FragTrap
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror 
SRC		:= 	main.cpp\
			ClapTrap.cpp\
			FragTrap.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp ClapTrap.hpp FragTrap.hpp ScavTrap.hpp
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): ClapTrap.hpp FragTrap.hpp ScavTrap.hpp $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)