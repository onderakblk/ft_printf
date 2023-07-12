/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <oakbulak@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:53:09 by oakbulak          #+#    #+#             */
/*   Updated: 2023/07/11 14:43:56 by oakbulak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_string(char *s);
int	ft_putnbr(long int nb);
int	checkpoint(unsigned long long int x);
int	ft_point(unsigned long long int x, int a);
int	ft_unnbr(unsigned int y);
int	ft_flag(char *s, int i);
int	ft_format(va_list *arg, char c);
int	ft_hex(unsigned int a, char c);
int	ft_printf(const char *str, ...);

#endif
