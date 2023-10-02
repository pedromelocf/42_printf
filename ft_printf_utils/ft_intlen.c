#include "../ft_printf.h"

int ft_intlen(int nb)
{
	int length;

	length = 0;
	while (nb > 10)
	{
		nb /= 10;
		length++;
	}
	if (nb < 10 && nb >= 0)
		length++;
	return (length);
}
