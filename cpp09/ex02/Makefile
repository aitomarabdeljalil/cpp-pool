NAME 		:= PmergeMe
CXX 		:= c++
CXXFLAGS	:= -Wall -Wextra -Werror --std=c++98
SRC 		:= main.cpp PmergeMe.cpp
OBJ			:= ${patsubst %.cpp, %.o, ${SRC}}
INCLUDES 	:= PmergeMe.hpp

.PHONY: all re clean

all: $(NAME)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp $(INCLUDES)
	$(CC) $(CXXFLAGS) -c -o $@ $<

$(NAME): $(INCLUDES) $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
