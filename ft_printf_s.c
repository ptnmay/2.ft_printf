/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:48:16 by psaeyang          #+#    #+#             */
/*   Updated: 2022/09/13 17:01:53 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	while (*s)
	{
		write(1, s, 1);
		s++;
		len++;
	}
	return (len);
}

int	ft_print_str(va_list arg)
{
	char	*s;

	s = (char *)va_arg(arg, char *);
	if (!s)
		return (ft_putstr("(null)"));
	return (ft_putstr(s));
}
