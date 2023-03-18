NAME 		:= RPN
CXX 		:= c++
CXXFLAGS	:= -Wall -Wextra -Werror --std=c++98 -g
SRC 		:= main.cpp RPN.cpp
OBJ			:= ${patsubst %.cpp, %.o, ${SRC}}
INCLUDES 	:= RPN.hpp

.PHONY: all re clean

all: $(NAME)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

%.o: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(NAME): $(INCLUDES) $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
