NAME	:= file
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= main.cpp

.PHONY: all re clean

all: $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
