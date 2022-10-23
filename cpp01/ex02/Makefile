NAME	:= PTRREF
CC		:= c++
CFLAGE	:= -Wall -Wextra -Werror
SRC		:= main.cpp
OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean


all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp
	$(CC) $(CFLAGE) -c -o $@ $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGE) $(OBJ) -o $(NAME)
