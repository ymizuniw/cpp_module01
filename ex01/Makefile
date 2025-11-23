NAME=test
CPP=c++
CPPFLAG=-Wall -Wextra -Werror -std=c++98

INC=Zombie.hpp
SRCS=main.cpp Zombie.cpp Zombie.hpp zombieHorde.cpp
OBJS=$(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CPP) -o $@ $^

%.o: %.cpp $(INC)
	$(CPP) $(CPPFLAG) -c $< -o $@

all: $(NAME)
clean:
	rm -f $(OBJS)
fclean:
	clean
	rm -f $(NAME)
.PHONY: all clean fclean
