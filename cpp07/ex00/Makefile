NAME	:= whatever
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC 	:= 	main.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY	: all clean fclean re

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

$(NAME) : whatever.hpp $(OBJ)
	${CC} ${FLAGS} ${OBJ} -o ${NAME}