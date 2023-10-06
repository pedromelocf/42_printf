NAME = libftprintf.a

LIBFT_DIR = libft

SRCS = ft_printf.c \
	ft_printf_utils/ft_put_unsigned.c \
	ft_printf_utils/ft_put_void_pointer.c \
	ft_printf_utils/ft_putchar.c \
	ft_printf_utils/ft_putnbr_base.c \
	ft_printf_utils/ft_putnbr.c \
	ft_printf_utils/ft_putstr.c \
	ft_printf_utils/ft_putnbr_bonus.c \
	ft_printf_utils/ft_putnbr_hex.c

OBJ = $(SRCS:.c=.o)
INCLUDES = ft_printf.h
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@
	ar rc $(NAME) $@

clean :
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean : clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re : fclean all

bonus: $(OBJ)
	make -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)

.PHONY: all clean fclean re
