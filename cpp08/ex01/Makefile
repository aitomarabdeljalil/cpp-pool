NAME	:= SPAN
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror
SRC		:= 	main.cpp Span.cpp

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp Span.hpp
	$(CC) $(CFLAGE) -c -o $@ $<

$(NAME): Span.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)