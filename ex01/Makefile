NAME=test01
CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98

CPPFLAGS=Zombie.hpp
SRCS=main.cpp Zombie.cpp zombieHorde.cpp
OBJS=$(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CXX) -o $@ $^

%.o: %.cpp $(CPPFLAGS)
	$(CXX) $(CPPFLAGS) -c $< -o $@

all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean

#use make -s option to build silently.