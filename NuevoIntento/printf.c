#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int main()
{
    int len, len2;
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Length:[%d, %i]\n", len2, len2);
    _printf("hola mundo ayudanos\n");
    _printf("c\n");
    _printf("4\n");
    _printf("%d\n", 4);
    _printf("%f\n", 4.50);
     _printf("Character:[%c]\n", 'H');
   _printf("String:[%s]\n", "I am a string !");
}
/* minprintf: minimal printf with variable argument list */
int _printf(const char *format, ...)
{
    va_list parametros; 
    char *p, *sval, *car;
    int ival;
    double dval;

    va_start(parametros, format); 
    for (p = format; *p; p++)
    {
        if (*p != '%')
        {
            putchar(*p);
            continue;
        }
        switch (*++p)
        {
        case 'd':
            ival = va_arg(parametros, int);
            printf("%d", ival);
            break;
        case 'f':
            dval = va_arg(parametros, double);
            printf("%f", dval);
            break;
        case 's':
            for (sval = va_arg(parametros, char *); *sval; sval++)
                putchar(*sval);
            break;

        default:
            putchar(*p);
            break;
        }
    }
    va_end(parametros); 
    return;
}