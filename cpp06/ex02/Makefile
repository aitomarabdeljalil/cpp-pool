NAME	:= DynamicCast
CC		:= c++
CFLAGE	:= -Wall -Wextra -Werror -std=c++98
SRC		:= 	main.cpp\
			tools.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY	: all clean fclean re

all : $(NAME)

%.o: %.cpp Base.hpp A.hpp B.hpp C.hpp
	$(CC) $(CFLAGE) -c -o $@ $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

$(NAME) : Base.hpp A.hpp B.hpp C.hpp $(OBJ)
	${CC} ${CFLAGE} ${OBJ} -o ${NAME}