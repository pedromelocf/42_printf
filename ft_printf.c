/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:50:49 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/10/03 19:54:14 by pmelo-ca         ###   ########.fr       */
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
			{
				if (str[i - 1] == ' ' || str[i - 1] == '+')
					length += ft_putchar(str[i - 1]);
				length += ft_putnbr(va_arg(args, int));
			}
			if (str[i] == 'u')
				length += ft_put_unsigned(va_arg(args, int));
			if (str[i] == 'x')
			{
				if (str[i - 1] == '#')
					length += ft_putstr("0x");
				length += ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
			}
			if (str[i] == 'X')
			{
				if (str[i - 1] == '#')
					length += ft_putstr("0x");
				length += ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
			}
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
int	main(void)
{
	int ret_ft;
    int ret_orig;

    // Casos com conversões sem flags ou modificadores de largura
    ret_ft = ft_printf("%c\n", 'A');
    ret_orig = printf("%c\n", 'A');
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

	ret_ft = ft_printf("%p\n", NULL);
    ret_orig = printf("%p\n", NULL);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%s\n", "Teste");
    ret_orig = printf("%s\n", "Teste");
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%d\n", 12345);
    ret_orig = printf("%d\n", 12345);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_orig = printf("%d\n", 12345);
    printf("Retorno printf: %d\n\n", ret_orig);

    ret_ft = ft_printf("%i\n", 0);
    ret_orig = printf("%i\n", 0);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%u\n", -35);
    ret_orig = printf("%u\n", -35);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%#x\n", 18);
    ret_orig = printf("%#x\n", 18);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%%\n");
    ret_orig = printf("%%\n");
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%c\n", 'Z');
    ret_orig = printf("%c\n", 'Z');
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%s\n", "OutroTeste");
    ret_orig = printf("%s\n", "OutroTeste");
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%d\n", 99999);
    ret_orig = printf("%d\n", 99999);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%X\n", 50);
    ret_orig = printf("%X\n", 50);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%+d\n", 12345);
    ret_orig = printf("%+d\n", 12345);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("% d\n", 12345);
    ret_orig = printf("% d\n", 12345);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%#x\n", 18);
    ret_orig = printf("%#x\n", 18);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    ret_ft = ft_printf("%#X\n", 50);
    ret_orig = printf("%#X\n", 50);
    printf("Retorno ft_printf: %d, Retorno printf: %d\n\n", ret_ft, ret_orig);

    return 0;
}
