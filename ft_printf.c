/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:50:49 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/09/30 16:54:04 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	short int	i;
	int			length;
	va_list		args;

	i = 0;
	length = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '#' || str[i] == '+' || str[i] == ' ')
				i++;
			if (str[i] == 'c')
				lenght += putchar();
			else if (str[i] == 's')
				lenght += putstring;
			else if (str[i] == 'p')
				lenght += ;
			else if (str[i] == 'd' || str[i] == 'i')
				lenght += putnbr;
			else if (str[i] == 'u')
				lenght += putnbr;
			else if (str[i] == 'x')
				lenght += ft_putnbr_base();
			else if (str[i] == 'X')
				lenght += ft_putnbr_base();
			else if (str[i] == '%')
				lenght += putchar(%);
		}
		else
			write(1, &str[i], 1);
	}
	va_end(args);
	return (length);
}
