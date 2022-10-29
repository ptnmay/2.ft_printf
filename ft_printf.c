/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:08:50 by psaeyang          #+#    #+#             */
/*   Updated: 2022/09/14 16:53:39 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_printchar(va_list arg)
{
	char	c;

	c = va_arg(arg, int);
	return (ft_putchar(c));
}

int	ft_check(va_list arg, const char *fmt)
{
	fmt++;
	if (*fmt == 'c')
		return (ft_printchar(arg));
	else if (*fmt == 's')
		return (ft_print_str(arg));
	else if (*fmt == 'p')
		return (ft_print_p(arg));
	else if (*fmt == 'd' || *fmt == 'i')
		return (ft_printdi(arg));
	else if (*fmt == 'u')
		return (ft_print_u(arg));
	else if (*fmt == 'x')
		return (ft_print_x(arg));
	else if (*fmt == 'X')
		return (ft_printhex(arg));
	else if (*fmt == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	int		print;
	va_list	arg;

	va_start(arg, fmt);
	print = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			print += ft_check(arg, fmt);
			fmt++;
		}
		else
			print += ft_putchar(*fmt);
		fmt++;
	}
	return (print);
}
