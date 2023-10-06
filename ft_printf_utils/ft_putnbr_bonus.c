/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:34:44 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/10/06 14:34:45 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_recursive_bonus(int nb, int *length)
{
	if (nb < 0)
	{
		*length += ft_putchar('-');
		if (nb == -2147483648)
		{
			*length += ft_putchar('2');
			nb += 2000000000;
		}
		nb *= -1;
	}
	if (nb < 10)
		*length += ft_putchar(nb + '0');
	else
	{
		ft_putnbr_recursive_bonus(nb / 10, length);
		ft_putnbr_recursive_bonus(nb % 10, length);
	}
	return (*length);
}

int	ft_putnbr_bonus(int nb, const char *str, int i)
{
	int	length;

	length = 0;
	if ((str[i - 1] == ' ' || str[i - 1] == '+') && (nb >= 0))
		length += ft_putchar(str[i - 1]);
	ft_putnbr_recursive_bonus(nb, &length);
	return (length);
}
