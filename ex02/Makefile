NAME=test02
SRCS=main.cpp
OBJS=$(SRCS:%.cpp=%.o)
CPPFLAGS=-I.

CPP=c++
CFLAGS= -std=c++98 -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) -o $@ $(OBJS)
%.o: %.cpp $(CPPFLAGS)
	$(CXX) $(CFLAGS) -c $< -o $@

all :$(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re test
