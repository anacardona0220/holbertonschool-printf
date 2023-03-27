#include <stdarg.h>
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
	case 'c':
	  car = va_arg(parametros, char *);
	  printf("%c", car);
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
