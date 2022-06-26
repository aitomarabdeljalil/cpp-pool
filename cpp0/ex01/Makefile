NAME 	:= PhoneBook
CC 		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC 	:= 	contact.cpp\
			main.cpp\
			phonebook.cpp\

OBJ 	:= ${patsubst %.cpp, %.o, ${SRC}}

all : ${NAME}

.PHONY : all clean fclean re

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

${NAME} : contact.hpp phonebook.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}