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

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(CFLAGE) -c -o $@ $<

$(NAME) : Weapon.hpp HumanA.hpp HumanB.hpp $(OBJ)
	${CC} ${CFLAGE} ${OBJ} -o ${NAME}