/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yneuillem <yneuillem@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:46:00 by yneuillem         #+#    #+#             */
/*   Updated: 2026/02/12 19:55:00 by yneuillem        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *input, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_strlen(char *str);

#endif
