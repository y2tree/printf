#include <stdarg.h>
#include <stdio.h>

int compter_args(int premier, ...)
{
    va_list args;
    int count = 0;
    int arg;

    va_start(args, premier);

    arg = premier;
    while (arg != -1)
    {
        count++;
        arg = va_arg(args, int);
    }
    va_end(args);
    return (count);
}

int main ()
{
    int nb = compter_args(10, 20, 30, 40, -1);
    printf("Nombre d'arguments : %d\n", nb);
    return (0);
}