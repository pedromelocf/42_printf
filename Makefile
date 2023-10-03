NAME = libftprintf.a

SRCS = ft_printf.c \
	ft_printf_utils/ft_intlen.c \
	ft_printf_utils/ft_put_unsigned.c \
	ft_printf_utils/ft_put_void_pointer.c \
	ft_printf_utils/ft_putchar.c \
	ft_printf_utils/ft_putnbr_base.c \
	ft_printf_utils/ft_putnbr.c \
	ft_printf_utils/ft_putstr.c

OBJ = $(SRCS:.c=.o)
INCLUDES = ft_printf.h
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@
	ar rc $(NAME) $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
