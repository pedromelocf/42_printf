/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:50:49 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/10/06 16:54:58 by pmelo-ca         ###   ########.fr       */
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
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '#' || str[i] == '+' || str[i] == ' ')
				i++;
			if (str[i] == 'c')
				length += ft_putchar(va_arg(args, int));
			if (str[i] == 's')
				length += ft_putstr(va_arg(args, char *));
			if (str[i] == 'p')
				length += ft_put_voidpointer(va_arg(args, char *));
			if (str[i] == 'd' || str[i] == 'i')
				length += ft_putnbr_bonus(va_arg(args, int), str, i);
			if (str[i] == 'u')
				length += ft_put_unsigned(va_arg(args, int));
			if (str[i] == 'x' || str[i] == 'X')
				length += ft_putnbr_hex(va_arg(args, unsigned int), str, i);
			if (str[i] == '%')
				length += ft_putchar('%');
		}
		else
			length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
