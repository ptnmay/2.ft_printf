/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:45:42 by psaeyang          #+#    #+#             */
/*   Updated: 2022/09/14 01:18:32 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenun(unsigned int nb)
{
	unsigned int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

void	ft_putun(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_putun(nb / 10);
		ft_putun(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	ft_print_u(va_list arg)
{
	unsigned int	nb;

	nb = va_arg(arg, unsigned int);
	ft_putun(nb);
	return (ft_lenun(nb));
}
