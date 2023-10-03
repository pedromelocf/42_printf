#include "../ft_printf.h"

int	ft_put_unsigned(int nb)
{
	int length;

	length = 0;
	if (nb < 0)
	{
		nb = 4294967295 + nb + 1;
		ft_putnbr(nb);
	}
	if ((nb < 10) && (nb >= 0))
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	length += ft_intlen(nb);
	return (length);
}
