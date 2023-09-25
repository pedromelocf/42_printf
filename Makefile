NAME = libftprintf.a

SRCS = ft_printf.c

OBJ = $(SRCS:.c=.o)
INCLUDES = ft_printf.h
FLAGS = -Wall -Weror -Wextra

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) - c $< -o $@
	ar rc $(NAME) $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
