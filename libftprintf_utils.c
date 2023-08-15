/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:33:00 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/08/15 19:29:53 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		i = 6;
	}
	else
	{
		write(1, str, ft_strlen(str));
		i = ft_strlen(str);
	}
	return (i);
}
int	ft_len(long long n, int base)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / base;
	}
	return (len);
}
int	ft_putnbr(int num, char signo, int base)
{
	int				i;
	unsigned  int	num_long;

	i = 0;
	if (num < 0)
	{
		if (signo == '-')
			ft_putchar('-');
		num_long = (num * -1);
	}
	else
		num_long = num;
	if (num_long <= 9)
		ft_putchar((num_long + '0'));
	if (num_long > 9)
	{
		ft_putnbr(num_long / base, signo, base);
		ft_putnbr(num_long % base, signo, base);
	}
	i = ft_len(num, base);
	return (i);
}

int	ft_printhex(unsigned long long ptr, char c)
{
	int		i;
	char	x_def;

	i = 0;
	x_def = 'a';
	if (c == 'p')
	{
		write(1, "0x", 2);
		c = 'a';
		i += 2;
	}
	if (c == 'X')
		x_def = 'A';
	if (ptr < 16)
	{
		if (ptr < 10)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + x_def);
	}
	else
	{
		ft_printhex(ptr / 16, c);
		ft_printhex(ptr % 16, c);
	}
	i += ft_len(ptr, 16);
	return (i);
}
