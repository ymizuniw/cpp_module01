NAME=test
SRCS=main.cpp\
newZombie.cpp\
randomChump.cpp\
Zombie.cpp
INCS=-I.
OBJS=$(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $@
$(OJBS): $(SRCS)
	$(CPP) $(CFLAGS) -o $@
%.o: %.cpp
	$(CPP) $(CFLAGS) $(INCS) -c $< -o $@

all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re

CPP=c++
CFLAGS=-std=c++98 -Wall -Wextra -Werror
