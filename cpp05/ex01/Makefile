NAME	:= Form
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98
SRC		:= main.cpp\
			Bureaucrat.cpp\
			Form.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

$(NAME): Bureaucrat.hpp Form.hpp $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)