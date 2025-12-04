#include "ft_printf.h"

int ft_div_hexa(unsigned long nb)
{
    unsigned long i;

    i = 0;
    if (nb == 0)
        i++;
    while (nb != '\0')
    {
        nb = nb / 16;
        i++;
    }
    return (i);
}
int ft_div_dec(long nb)
{
    unsigned int i;

    i = 0;
    if (nb < 0)
    {
        i = -i;
        i++; 
    }
    if (nb == 0)
        i++;
    while (nb != '\0')
    {
        nb = nb / 10;
        i++;
    }
    return (i);
}

