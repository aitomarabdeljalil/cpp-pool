NAME	:= ReinterpretCast
CC		:= c++
CFLAGE	:= -Wall -Wextra -Werror -std=c++98
SRC		:= 	main.cpp\
			Data.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY	: all clean fclean re

all : $(NAME)

%.o: %.cpp Data.hpp
	$(CC) $(CFLAGE) -c -o $@ $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

$(NAME) : Data.hpp $(OBJ)
	${CC} ${CFLAGE} ${OBJ} -o ${NAME}