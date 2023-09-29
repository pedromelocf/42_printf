/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:44:22 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/09/29 18:20:40 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

void	ft_decimal_to_hexa(int nbr)
{
	char	*base;
	char	hexnumber[50];
	int		index;
	int		reminder;

	base = "0123456789abcdef";
	index = 0;
	while (nbr > 0)
	{
		reminder = nbr % 16;
		hexnumber[index++] = base[reminder];
		nbr /= 16;
	}
	return;
}
int	main(void)
{
	ft_decimal_to_hexa(18500);
	return (0);
}
