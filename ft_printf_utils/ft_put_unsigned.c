#include "../ft_printf.h"

int	ft_put_unsigned(long int nb)
{
	int	length;

	length = 0;
	if (nb < 0)
		nb = 4294967295 + nb + 1;
	if (nb < 10)
		length += ft_putchar(nb + '0');
	else
	{
		length += ft_putnbr(nb / 10);
		length += ft_putnbr(nb % 10);
	}
	return (length);
}
