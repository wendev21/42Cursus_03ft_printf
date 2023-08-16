/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:02:48 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/08/16 13:58:03 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putnum(unsigned long num, int base)
{
	int	i;

	i = 0;
	if (num <= 9)
		ft_putchar(num + '0');
	else
	{
		ft_putnum((num / base), base);
		ft_putnum((num % base), base);
	}
	i = ft_len((unsigned long int)num, base);
	return (i);
}
