NAME	:= Zombie
CC		:= c++
CFLAGE	:= -Wall -Wextra -Werror -std=c++98
SRC		:= 	main.cpp\
			newZombie.cpp\
			randomChump.cpp\
			Zombie.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY	: all clean fclean re

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

$(NAME) : Zombie.hpp $(OBJ)
	${CC} ${CFLAG} ${OBJ} -o ${NAME}