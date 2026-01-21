/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:10:20 by vasari            #+#    #+#             */
/*   Updated: 2026/01/21 17:28:32 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// 

int ft_putnbr(int n)
{
    if (n == -2147483648)
        write(1, "-2147483648", 21);
    if (n < 0)
    {
        n = n * -1;
        write(1, "-", 1);
    }
    
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    
    if (n <= 9)
    {
        n = n + '0';
        write(1, &n, 1);
    }
    return (n); 
}

int main ()
{
    int a = -123;
    ft_putnbr(123);
    return 0;
}