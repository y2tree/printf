#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int     ft_putnbr_base(long nbr, char *base)
{
    int     taille;
    long    n;
    int     len;
    
    n = nbr;
    taille = ft_strlen(base);
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= taille)
    {
        ft_putnbr_base((n / taille), base);
    }
    ft_putchar(base[n % taille]);
    if (ft_strlen(base) == 10)
    {
        len = ft_div_hexa(nbr);
    }
    if (ft_strlen(base) == 16)
    {
        len = ft_div_dec(nbr);
    }
    return (len);
}

int main()
{
	// char hexa [] = "0123456789abcdef";
	// //char s1 [] = "dfsdfsdfds";
	// int len = ft_putnbr_base(0, hexa);
	// printf("%d", len);
	char dec [] = "0123456789";
	int bla = ft_putnbr_base(634213, dec);
	printf("\n%i\n", bla);

    char hexa [] = "0123456789abcdef";
    int blo = ft_putnbr_base(8327, hexa);
    printf("\n%i\n", blo);
// }
// {
// 	int *len;
// 	int i = 0;
// 	while (i < 12)
// 	{

// 		i++;
// 	}
	return (0);
}

// /*
//     dans un int foutre la taille de basse avec un strlen
//     verif si negatif et si oui l'affciher

//     hop recursivité de putnbrbase n divise par la taille de base pour n
//     putchar pour afficher le modulo


// */

