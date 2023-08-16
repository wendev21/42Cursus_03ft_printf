/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:47:57 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/08/15 21:10:28 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

int					ft_printf(char const *str, ...);
int					ft_putchar(char c);
int					ft_putstr(char *str);
int					ft_putnbr(int num, char signo, int base);
int					ft_printhex(unsigned long long ptr, char c, int *i);
int					ft_putnum(unsigned long num, int base);
int					ft_len(long long n, int base);
size_t				ft_strlen(const char *str);
char				*ft_strchr(const char *s, int c);
#endif
