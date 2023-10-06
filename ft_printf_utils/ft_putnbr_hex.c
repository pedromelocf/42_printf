/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:34:37 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/10/06 14:50:38 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_hex(unsigned long int nbr, const char *str, int i)
{
	char			*hexnumber;
	int				index;
	unsigned int	reminder;
	int				base_len;
	char			*NONCAPHEX;
	char			*CAPHEX;

	NONCAPHEX = "0123456789abcdef";
	CAPHEX = "0123456789ABCDEF";
	base_len = 0;
	index = 0;
	if (nbr == 0)
		return (ft_putchar('0'));
	hexnumber = malloc(sizeof(char) * 32);
	if (str[i] == 'x')
	{
		if (str[i - 1] == '#')
			base_len = ft_putstr("0x");
		while (nbr > 0)
		{
			reminder = nbr % 16;
			hexnumber[index++] = NONCAPHEX[reminder];
			nbr /= 16;
		}
	}
	if (str[i] == 'X')
	{
		if (str[i - 1] == '#')
			base_len = ft_putstr("0X");
		while (nbr > 0)
		{
			reminder = nbr % 16;
			hexnumber[index++] = CAPHEX[reminder];
			nbr /= 16;
		}
	}
	hexnumber[index] = '\0';
	while (index > 0)
		ft_putchar(hexnumber[--index]);
	base_len += ft_strlen(hexnumber);
	free(hexnumber);
	return (base_len);
}
