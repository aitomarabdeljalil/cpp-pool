NAME	:= Bureaucrat
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98
SRC		:= main.cpp\
			Bureaucrat.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp Bureaucrat.hpp
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): Bureaucrat.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)