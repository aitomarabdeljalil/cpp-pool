NAME	:= Form
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98
SRC		:= Bureaucrat.cpp Form.cpp PresidentialPardon.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJ		:= ${patsubst %.cpp, %.o, ${SRC}}

.PHONY: all re clean

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp Bureaucrat.hpp Form.hpp PresidentialPardon.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): Bureaucrat.hpp Form.hpp PresidentialPardon.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)