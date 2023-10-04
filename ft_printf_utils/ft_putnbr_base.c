/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:44:22 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/10/03 21:54:30 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_base(int nbr, char *base)
{
	char	*hexnumber;
	int		index;
	int		reminder;
	int		base_len;

	base_len = ft_strlen(base);
	index = 0;
	hexnumber = malloc(sizeof(char) * 9);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	while (nbr > 0)
	{
		reminder = nbr % base_len;
		hexnumber[index++] = base[reminder];
		nbr /= base_len;
	}
	while (index > 0)
		write(1, &hexnumber[--index], 1);
	base_len = ft_strlen(hexnumber);
	// hexnumber = NULL;
	free(hexnumber);
	return (base_len);
}
