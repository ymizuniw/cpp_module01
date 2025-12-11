CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = test03
CPPFLAGS = -I. -I$(LIBFT_DIR)/includes
SRCS = HumanA.cpp \
HumanB.cpp \
main.cpp \
Weapon.cpp
OBJS=$(SRCS:%.cpp=%.o)
LIB = $(LIBFT_DIR)/libft_cpp.a
LIBFT_DIR = ../libft_cpp

$(NAME): $(OBJS) $(LIB)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(LIB)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ -c $<
$(LIB):
	$(MAKE) -C $(LIBFT_DIR)

all: $(NAME)
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)
fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re