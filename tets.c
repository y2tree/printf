#include <stdio.h>
#include <unistd.h>

// int main ()
// {
//     int a = -10;
//     int b = a * -1;
//     int c = (a / 2) % 10;
//     printf("%d/n", b);
//     printf("%d", c);
//     return (0);
// }

void ft_putchar(char c)
{
    write(1, &c, 1);
}

// void ft_putdigit(int digit)
// {
//     // Transforme le chiffre en caractère et utilise ft_putchar
//     while (digit >= 0 && digit <= 9)
//     {
//         digit = digit + '0';
//         ft_putchar(digit);
//     }
// }

// void ft_put_two_difit(int n)
// {
//     if (n >= 10)
//     {
//         ft_put_two_difit(n / 10);
//         ft_put_two_difit(n % 10);
//     }
//     if (n <= 9)
//     {
//         n = n + '0';
//         ft_putchar(n);
//     }

void ft_put_two_digit(int n)
{
    /* comme je fais appel a une condition plutot qu'un while il pourra remonter 
        il remontera car quand c'est une condition il prend en compte le resultat mais n'execute l'information qu'apres avoir lu tout le contenu de la donction et donc le ft_putchar du dessous
        je fais passer dans la condition si "n" est plus grand que 10
            j'utilise la recursivité pour le diviser par 10 
        
            jecris n et son modulo de 10 ) converti en char
    */
   if (n >= 10)
   {
        ft_put_two_digit(n / 10);
   }
   ft_putchar((n % 10) + '0');
}

int main ()
{
    // int a = 233;
    // ft_putdigit(7);
    ft_put_two_digit(32443434);
    return (0);
}
