/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:50:49 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/09/29 18:33:46 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	short int i;
	int length;

	i = 0;
	length = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				putchar('c');
			else if (str[i] == 's')
			else if (str[i] == 'p')
			else if (str[i] == 'd')
			else if (str[i] == 'i')
			else if (str[i] == 'u')
			else if (str[i] == 'x')
			else if (str[i] == 'X')
			else if (str[i] == '%')
		}
		else
			write(1, &str[i], 1);
	}
	return (length);
}
