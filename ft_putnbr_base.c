/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:10:32 by vasari            #+#    #+#             */
/*   Updated: 2026/01/23 17:29:55 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putnbr_base(long nbr, char *base)
{
	int		len; // pour le nombre de caractere affiché
	long	n; // la copie du nombre pour pouvoir la modifié
	int		base_len; // la taille de la base

	len = 0;
	n = nbr;
	base_len = ft_strlen(base);
	
	// simple gestion des negatifs
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	
	// recurtion pour les chiffres de gauche
	if (n >= base_len)
		len += ft_putnbr_base(n / base_len, base); // mets dans la recurtion la formule 
		// mathematique pour convertir un nombre en binaire ou autre
	len += ft_putchar(base[n % base_len]);
	return (len);
}

int	main(void)
{
	char	dec[] = "0123456789";
	char	hexa[] = "0123456789abcdef";
	int		len_dec;
	int		len_hexa;

	len_dec = ft_putnbr_base(634213, dec);
	write(1, "\n", 1);
	len_hexa = ft_putnbr_base(8327, hexa);
	write(1, "\n", 1);
	return (0);
}

// /*
//     dans un int foutre la taille de basse avec un strlen
//     verif si negatif et si oui l'affciher

//     hop recursivité de putnbrbase n divise par la taille de base pour n
//     putchar pour afficher le modulo

// */
