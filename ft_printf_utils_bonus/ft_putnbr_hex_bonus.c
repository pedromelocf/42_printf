/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:34:37 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/10/09 14:32:42 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf_bonus.h"

int	ft_putnbr_hex_bonus(unsigned long int nbr, int index, char *base)
{
	unsigned int	reminder;
	int				length;
	char			*hexnumber;

	length = 0;
	hexnumber = malloc(sizeof(char) * 32);
	while (nbr > 0)
	{
		reminder = nbr % 16;
		hexnumber[index++] = base[reminder];
		nbr /= 16;
	}
	hexnumber[index] = '\0';
	while (index > 0)
		length += ft_putchar_bonus(hexnumber[--index]);
	hexnumber[index] = '\0';
	free(hexnumber);
	return (length);
}
