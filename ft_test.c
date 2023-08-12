/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:55:54 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/08/12 16:07:00 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_sum(int n, ...)
{
	va_list	args;
	int	addsum;

	va_start(args, n);
	addsum = 0;
	while (n >  0)
	{
		addsum += va_arg(args, int);
		n--;
	}
	va_end(args);
	return (addsum);
}
int main ()
{
	printf("%i\n", ft_sum(2, 5, 6, 1));
	return (0);
}
