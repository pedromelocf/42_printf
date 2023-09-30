/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:50:49 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/09/30 16:42:45 by pmelo-ca         ###   ########.fr       */
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
				write(1, str[i]);
			else if (str[i] == 's')
				putstring;
			else if (str[i] == 'p')
			
			else if (str[i] == 'd' || str[i] == 'i')
				putnumber;
			else if (str[i] == 'u')
				putnumber;
			else if (str[i] == 'x')
				ft_putnbr_base();
			else if (str[i] == 'X')
				ft_putnbr_base();
			else if (str[i] == '%')
				write(1, '%', 1);
		}
		else
			write(1, &str[i], 1);
	}
	return (length);
}
