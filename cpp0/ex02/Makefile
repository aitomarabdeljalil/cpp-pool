NAME	:= Accounts
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC 	:= 	tests.cpp\
			Account.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY	: all clean fclean re

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

$(NAME) : Account.hpp $(OBJ)
	${CC} ${FLAGS} ${OBJ} -o ${NAME}