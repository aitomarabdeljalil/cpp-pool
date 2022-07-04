NAME	:= Human
CC		:= c++
CFLAGE	:= -Wall -Wextra -Werror
SRC		:= 	main.cpp\
			Weapon.cpp\
			HumanA.cpp\
			HumanB.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY	: all clean fclean re

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

$(NAME) : Weapon.hpp HumanA.hpp HumanB.hpp $(OBJ)
	${CC} ${CFLAG} ${OBJ} -o ${NAME}