/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:37:43 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/08/15 19:46:58 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	find_format(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == '%')
		len += ft_putchar('%');
	else if (c == 'i' || c == 'd')
		len += ft_putnbr(va_arg(args, long int), '-', 10);
	else if (c == 'u')
		len += ft_putnum(va_arg(args, unsigned long long int), 10);
	else if (c == 'p' || c == 'x')
		len += ft_printhex(va_arg(args, unsigned long), c);
	else if (c == 'X')
		len += ft_printhex(va_arg(args, unsigned long), c);
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!str || *str == '\0')
		return (0);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", str[i + 1]))
			{
				i++;
				len += find_format(str[i], args);
			}
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
