/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:37:43 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/08/12 20:49:29 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

void	find_format(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == '%')
		ft_putchar('%');
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(args, int));
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
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
				find_format(str[i], args);
			}
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (0);
}
/*
int	main(void)
{
	char	*p;
	p = "este es la memoria que ocupa";

	ft_printf("hola\n");
	printf("hola\n");

	ft_printf("%chola\n", 'a');
	printf("%chola\n",  'a');


	ft_printf("%c ", '0');
	printf("%c ",  '0');

	
	ft_printf("%shola \n", "esto es una string ");
	printf("%shola \n",  "esto es una string ");

	ft_printf("%i \n", 1655);
	printf("%i \n",  1655);
//	ft_printf("%p\n", p);
	printf("%p\n", p);
	return (0);

}*/
