NAME	:= Form
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98
SRC		:=  main.cpp\
			Bureaucrat.cpp\
			Form.cpp\
			RobotomyRequestForm.cpp\
			ShrubberyCreationForm.cpp\
			PresidentialPardonForm.cpp\

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp Bureaucrat.hpp Form.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): Bureaucrat.hpp Form.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)