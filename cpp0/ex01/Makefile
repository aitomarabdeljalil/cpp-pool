NAME 	:= PhoneBook
CC 		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC 	:= 	contact.cpp\
			main.cpp\
			phonebook.cpp\

OBJ 	:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY : all clean fclean re

all : ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

${NAME} : contact.hpp phonebook.hpp ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}