/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:00:03 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/09/30 17:33:44 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght])
	{
		ft_putchar(str[lenght]);
		lenght++;
	}
	return (lenght);
}