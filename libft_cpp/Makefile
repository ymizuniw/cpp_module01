NAME=libft_cpp.a
AR=ar rcs
CPP=c++
CFLAGS=-std=c++98 -Wall -Wextra -Werror
INCS=-Iincludes
SRCS=\
	$(SRC_DIR)/print_msg.cpp

SRC_DIR=srcs
OBJS=$(SRCS:.cpp=.o)
%.o: %.cpp
	$(CPP) $(CFLAGS) $(INCS) -c $< -o $@

all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $@ $^

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re

# git clone git@github.com:ymizuniw/libft_cpp.git
# rm -fr libft_cpp/.git
# mv libft_cpp path/to/project

# Archive Option:
# c
# Create the archive. The specified archive is always created if it did not exist, when you request an update. But a warning is issued unless you specify in advance that you expect to create it, by using this modifier.
# r
# Insert the files member... into archive (with replacement). This operation differs from q in that any previously existing members are deleted if their names match those being added.
# s
# Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive. You may use this modifier flag either with any operation, or alone. Running "ar s" on an archive is equivalent to running
# https://stackoverflow.com/questions/29714300/what-does-the-rcs-option-in-ar-do
