/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 02:34:12 by psaeyang          #+#    #+#             */
/*   Updated: 2022/09/14 17:03:15 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *fmt, ...);
int		ft_check(va_list arg, const char *fmt);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_print_char(va_list arg);
int		ft_print_str(va_list arg);
int		ft_printdi(va_list arg);
int		ft_len(unsigned long nb);
int		ft_lenun(unsigned int nb);
int		ft_print_u(va_list arg);
int		ft_print_p(va_list arg);
int		ft_lenp(unsigned long i);
int		ft_putp(unsigned long i, char *sixteen);
int		ft_print_x(va_list arg);
int		ft_printhex(va_list arg);
void	ft_putun(unsigned int nb);
void	ft_putnbr(int nb);

#endif
