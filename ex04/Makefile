LIBFT_DIR=../libft_cpp
LIBFT=$(LIBFT_DIR)/libft_cpp.a
LIBS=$(LIBFT)

NAME=test04
SRCS=main.cpp\
SedFile.cpp
CPPFLAGS=-I. -I$(LIBFT_DIR)/includes
OBJS=$(SRCS:%.cpp=%.o)

CXX=c++
CXXFLAGS=-std=c++98 -Wall -Wextra -Werror

$(NAME): $(OBJS) $(LIBS)
	$(CXX) $(CFLAGS) -o $@ $(OBJS) $(LIBS)
$(LIBS):
	$(MAKE) -C $(LIBFT_DIR)
%.o : %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

all: $(NAME)
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)
fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)
	./delete.sh
re: fclean all
.PHONY: all clean fclean re
