/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:22:59 by psaeyang          #+#    #+#             */
/*   Updated: 2022/09/14 16:52:58 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putp(unsigned long i, char *sixteen)
{
	if (i >= 16)
		ft_putp(i / 16, sixteen);
	ft_putchar(sixteen[i % 16]);
	return (0);
}

int	ft_lenp(unsigned long i)
{
	unsigned long	len;

	len = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		len++;
		i /= 16;
	}
	return (len);
}

int	ft_print_p(va_list arg)
{
	unsigned long	i;

	i = va_arg(arg, unsigned long);
	ft_putstr("0x");
	ft_putp(i, "0123456789abcdef");
	return (ft_lenp(i) + 2);
}
