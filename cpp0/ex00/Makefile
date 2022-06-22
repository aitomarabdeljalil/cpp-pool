NAME	:= megaphone
CC		:= c++
CFLAGS	:=
SRC		:= megaphone.cpp

.PHONY: all re clean

all: $(NAME)

clean:
	rm -rf $(NAME)

re: fclean all

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)
