#include "../ft_printf.h"

int ft_put_voidpointer(char *str)
{
	int length;

	if (!str)
		return (ft_putstr("(nil)"));
	length = 0;
	length += ft_putstr("0x");
	length += ft_putnbr_base((unsigned long long int)str, "0123456789ABCDEF");
	return (length);
}
// int main (void)
// {
// 	ft_put_adress("Pedro");
// 	return (0);
// }
