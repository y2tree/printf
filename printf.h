/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:35:34 by vasari            #+#    #+#             */
/*   Updated: 2025/11/27 16:55:23 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int ft_printf(const char *format, );

int ft_putchar(char c);
int ft_putchar(char *s);

int ft_putnbr(int n);
int ft_putnbr_unsigned(unsigned int n);

int ft_puthex(unsigned int n, char format);
int ft_putptr(unsigned long ptr);

int ft_strlen(char *s);
#endif 