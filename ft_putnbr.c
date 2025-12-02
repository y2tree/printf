#include <unistd.h>
#include <stdio.h>

int     ft_putnbr(int n)
{
    char conv;

    if (n == -2147483648)
        write(1, "-2147483648", 11);
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    if (0 <= n || 9 >= n)
    {
        conv = n + '0';
        write(1, &conv, 1);
    }
    return (n);
}

int main ()
{
    int i = 42;
    ft_putnbr(i);

    printf("%d\n", ft_putnbr(i));
    return (0);
}
