#include "../ft_printf.h"

int	ft_put_voidpointer(char *str)
{
	int	length;

	length = 0;
	if (!str)
		return (ft_putstr("(nil)"));
	length += ft_putstr("0x");
	length += ft_putnbr_base((unsigned long long int)str, "0123456789ABCDEF");
	return (length);
}
