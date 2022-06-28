NAME	:= megaphone
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= megaphone.cpp

.PHONY: all re clean

all: $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
