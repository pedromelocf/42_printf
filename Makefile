NAME = libftprintf.a

LIBFT_DIR = libft

SRCS = ft_printf_utils/ft_check_conversion.c \
	ft_printf_utils/ft_printf.c \
	ft_printf_utils/ft_put_hex.c \
	ft_printf_utils/ft_put_unsigned.c \
	ft_printf_utils/ft_put_void_pointer.c \
	ft_printf_utils/ft_putchar.c \
	ft_printf_utils/ft_putnbr_base.c \
	ft_printf_utils/ft_putnbr_hex.c \
	ft_printf_utils/ft_putnbr.c \
	ft_printf_utils/ft_putstr.c

BONUS_SRCS = \
	ft_printf_utils_bonus/ft_printf_bonus.c \
	ft_printf_utils_bonus/ft_put_unsigned_bonus.c \
	ft_printf_utils_bonus/ft_put_voidpointer_bonus.c \
	ft_printf_utils_bonus/ft_putchar_bonus.c \
	ft_printf_utils_bonus/ft_putnbr_base_bonus.c \
	ft_printf_utils_bonus/ft_putnbr_bonus.c \
	ft_printf_utils_bonus/ft_putstr_bonus.c \
	ft_printf_utils_bonus/ft_putnbr_hex_bonus.c \
	ft_printf_utils_bonus/ft_put_hex_bonus.c \
	ft_printf_utils_bonus/ft_check_conversion_bonus.c \
	ft_printf_utils_bonus/ft_putnbr_str_bonus.c

OBJ = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS_SRCS:.c=.o)
INCLUDES = ft_printf_utils/includes/ft_printf.h
BONUS_INCLUDES = ft_printf_utils_bonus/includes/ft_printf_bonus.h
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)

%.o: %.c $(INCLUDES)
	$(CC) $(FLAGS) -Ift_printf_utils/includes -c $< -o $@

clean :
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re : fclean all

bonus: $(BONUS_OBJ)
	make -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a $(NAME)
	ar rc $(NAME) $(BONUS_OBJ)

.PHONY: all clean fclean re bonus
