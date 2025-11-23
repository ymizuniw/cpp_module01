NAME=test
CPP=c++
CPPFLAG=-Wall -Wextra -Werror -std=++98

SRCS=main.cpp Zombie.cpp Zombie.hpp zombieHorde.cpp
OBJS=(SRCS:.cpp=.o)

$(NAME):
	$(CPP) $(CPPFLAG) -c $(OBJS)

all: $(NAME)
clean:
	rm -f $(OBJS)
fclean:
	clean
	rm -f $(NAME)
.PHONY: all clean fclean
