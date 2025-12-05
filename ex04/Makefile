LIBFT_DIR=../libft_cpp
LIBFT=$(LIBFT_DIR)/libft_cpp.a
LIBS=$(LIBFT)

NAME=test04
SRCS=main.cpp\
SedFile.cpp
INCS=-I. -I$(LIBFT_DIR)/includes
OBJS=$(SRCS:%.cpp=%.o)

CPP=c++
CFLAGS=-std=c++98 -Wall -Wextra -Werror

$(NAME): $(OBJS) $(LIBS)
	$(CPP) $(CFLAGS) $(OBJS) $(LIBS) -o $@
$(LIBS):
	$(MAKE) -C $(LIBFT_DIR)
%.o : %.cpp
	$(CPP) $(CFLAGS) $(INCS) -c $< -o $@

all: $(NAME)
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)
fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re test04
