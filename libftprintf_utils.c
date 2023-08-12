/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:33:00 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/08/12 20:35:13 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putnbr(int num)
{
	unsigned int	num_long;

	if (num < 0)
	{
		ft_putchar('-');
		num_long = (num * -1);
	}
	else
		num_long = num;
	if (num_long <= 9)
		ft_putchar(num_long + '0');
	if (num_long > 9)
	{
		ft_putnbr(num_long / 10);
		ft_putnbr(num_long % 10);
	}
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cc;

	str = ((char *)s);
	cc = (char)c;
	while (*str != cc)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
