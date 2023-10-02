#include "../ft_printf.h"

int	ft_put_unsigned(unsigned int nb)
{
	if (nb < 0)
	{
		nb = 4294967295 + nb + 1;
		ft_putnbr(nb);
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (0);
}
