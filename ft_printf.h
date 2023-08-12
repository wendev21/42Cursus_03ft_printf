/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:37:43 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/08/12 20:34:26 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int			ft_printf(char const *str, ...);
int			ft_strlen(char const *str);
char		*ft_strchr(const char *s, int c);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int num);

#endif
