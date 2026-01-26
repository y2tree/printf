#include <stdarg.h>
#include <stdio.h>

int simple_printf(const char *format, ...)
{
    va_list args; // declare la liste
    va_start(args, format); // initialise (format = dernier param fixe ???)

    // exemple : si appel = simple_printf("%s %d", "hello", 42)
    char *str = va_arg(args, char *); // recupere "hello"
    int nb = va_arg(args, int); // recup "42"

    printf("%s, %d\n", str, nb); // affiche 
    
    va_end(args); // nettoie un peu comme free pour malloc
    return (0);
}