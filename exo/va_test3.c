#include <stdarg.h>
#include <stdio.h>

int compter_args(int premier, ...)
{
    va_list args;
    int count = 0;
    va_start(args, premier);
    //int nb = (args, int);
    while (count != -1)
    {
        int nb = va_args(args, int);
    }

    va_end(args);
}

int main ()
{
    int nb = compter_args(10, 20, 30, -1);
    return (0);
}