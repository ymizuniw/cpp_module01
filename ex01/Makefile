NAME=test01
CPP=c++
CPPFLAG=-Wall -Wextra -Werror -std=c++98

INC=Zombie.hpp
SRCS=main.cpp Zombie.cpp zombieHorde.cpp
OBJS=$(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CPP) -o $@ $^

%.o: %.cpp $(INC)
	$(CPP) $(CPPFLAG) -c $< -o $@

all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean

test: all
	./test.sh

#use make -s option to build silently.