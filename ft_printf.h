/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:35:34 by vasari            #+#    #+#             */
/*   Updated: 2025/12/04 11:33:55 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int                 ft_printf(const char *format, ...);

int                 ft_putchar(char c);

int                 ft_putstr(char *s);

int                 ft_putnbr_nase(int n, char *base);

int                 ft_putnbr_unsigned(unsigned int n);

int                 ft_puthex(unsigned int n, char format);

int                 ft_putptr(unsigned long ptr);

int                 ft_strlen(char *s);

int		            ft_div_dec(long nb);

int		            ft_div_hexa(unsigned long nb);

#endif 