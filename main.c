/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:26:31 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/08/15 19:44:12 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*p;

	p = "este es la memoria que ocupa";
	
	ft_printf("dgs%uxx\n", 10);
	printf("dgs%uxx\n", 10);
	
	ft_printf("%x\n", -10);
	printf("%x \n",  -10);

	ft_printf("%x\n", -10);
	printf("%x \n",  -10);
	
	ft_printf("%u\n", -10);
	printf("%u \n",  -10);

	ft_printf(" %d \n", -200000);
	printf(" %d \n", -200000);
//
	ft_printf("hola\n");
	printf("hola\n");
//
	ft_printf("%chola\n", 'a');
	ft_printf(" %c %c %c ", '0', 0, '1');
	printf(" %c %c %c ", '0', 0, '1');
	printf("%chola\n", 'a');
//
	ft_printf("%c ", '0');
	printf("%c ", '0');
//
	ft_printf("%shola \n", "esto es una string ");
	printf("%shola \n",  "esto es una string ");
//
	ft_printf("%i \n",1655);
	printf("%i \n", 1655);
//
	ft_printf("%d\n", 1655);
	printf("%d\n", 1655);
//
	printf("%shi\n", NULL);
	ft_printf("%shi\n", NULL);
//
	printf("%%\n");
    ft_printf("%%\n");
//
	ft_printf("%p\n", p);
	printf("%p\n", p);
//
	ft_printf(" %p \n", -1);
	printf(" %p \n", -1);
	return (0);
}
