#include <limits.h>
#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...)
{
    va_list argumentos;
    int num = 0;

    if (format == NULL)
        return (-1);

    va_start(argumentos, format);

    while (*format != '\0')

    {
        if (*format == '%')

        {
            format++;

            num += _process_format(*format, argumentos);
        }
        else
        {
            _putchar(*format);
            num++;
        }
        format++;
    }

    va_end(argumentos);

    return (num);
}
