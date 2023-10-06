/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:51:05 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/10/06 16:52:58 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# define NONCAPHEX "0123456789abcdef"
# define CAPHEX "0123456789ABCDEF"

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr_base(unsigned long int nbr, char *base);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_put_unsigned(long int nb);
int	ft_put_voidpointer(char *str);
int	ft_putnbr_bonus(int nb, const char *str, int i);
int ft_putnbr_hex(unsigned long int nbr, const char *str, int i);

#endif
