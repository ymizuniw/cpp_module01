NAME=test
SRCS=main.cpp\
newZombie.cpp\
randomChump.cpp\
Zombie.cpp
CPPFLAGS=-I.
OBJS=$(SRCS:%.cpp=%.o)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@
$(OJBS): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re

CXX=c++
CXXFLAGS=-std=c++98 -Wall -Wextra -Werror
