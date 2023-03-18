NAME 		:= btc
CXX 		:= c++
CXXFLAGS	:= -Wall -Wextra -Werror --std=c++98
SRC 		:= main.cpp BitcoinExchange.cpp
OBJ			:= ${patsubst %.cpp, %.o, ${SRC}}
INCLUDES 	:= BitcoinExchange.hpp

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
