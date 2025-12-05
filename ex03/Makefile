CPP=c++
CFLAGS=-std=c++98 -Wall -Wextra -Werror

NAME=test03
INCS=-I.
SRCS=HumanA.cpp\
HumanB.cpp\
main.cpp\
print_wrapper.cpp\
Weapon.cpp
OBJS=$(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $@
%.o: %.cpp
	$(CPP) $(CFLAGS) $(INCS) -c $< -o $@

all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re test03
