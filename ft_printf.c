/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:50:49 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/10/02 19:42:04 by pmelo-ca         ###   ########.fr       */
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
			else if (str[i] == 'c')
				length += ft_putchar(va_arg(args, int));
			else if (str[i] == 's')
				length += ft_putstr(va_arg(args, char *));
			else if (str[i] == 'p')
				length += ft_putstr(va_arg(args, char *));
			else if (str[i] == 'd' || str[i] == 'i')
				length += ft_putnbr(va_arg(args, int));
			else if (str[i] == 'u')
				length += ft_put_unsigned(va_arg(args, unsigned int));
			else if (str[i] == 'x')
				length += ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
			else if (str[i] == 'X')
				length += ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
			else if (str[i] == '%')
				length += ft_putchar('%');
		}
		else
			length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
int	main(void)
{
	ft_printf("Minha funçao: %c\n", 'a');
	printf("Original: %c\n\n", 'a');
	ft_printf("Minha funçao: %s\n", "Pedro");
	printf("Original: %s\n\n", "Pedro");
	ft_printf("Minha funçao: %p\n", "Pedro");
	printf("Original: %p\n\n", "Pedro");
	ft_printf("Minha funçao: %d\n", 42);
	printf("Original: %d\n\n", 42);
	ft_printf("Minha funçao: %i\n", 42);
	printf("Original: %i\n\n", 42);
	ft_printf("Minha funçao: %u\n", -56);
	printf("Original: %u\n\n", -56);
	ft_printf("Minha funçao: %x\n", 495);
	printf("Original: %x\n\n", 495);
	ft_printf("Minha funçao: %X\n", 495);
	printf("Original: %X\n\n", 495);
	ft_printf("Minha funçao: %%\n");
	printf("Original: %%\n\n");
	return (1);
}
