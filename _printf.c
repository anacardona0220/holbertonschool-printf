#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
* _printf - a function that produces output according to a format
* _puntchar - function to print
* _process_format - process the format
*@format: char
*description - function that produces output according to a format
*Return: 0;
*/
int _printf(const char *format, ...)
{
va_list argumentos;
int num = 0;
if (format == NULL)
return (-1);
va_start(argumentos, format);
if (*format == 0)
{
num = -1;
return (num);
}
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
