#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
* _printf - a function that produces output according to a format
* _puntchar - function to print
* _process_format - process the format
*@format: char
*description - function that produces output according to a format
*Return: 0;
*/
int _process_format(char format, va_list argumentos)
{
int num = 0;
if (format != 'd' && format != 'i' && format != 's' && format != 'f' && format != 'c'  && format != '%')
{
num += printf("%c", format);
}
else
{
switch (format)
{
case 'd':
num += printf("%d", va_arg(argumentos, int));
break;
case 's':
num += printf("%s", va_arg(argumentos, char *));
break;
case 'f':
num += printf("%f", va_arg(argumentos, double));
break;
case 'c':
num += printf("%c", va_arg(argumentos, char *));
break;
case 'i':
num += printf("%i", va_arg(argumentos, int));
break;
default:
return -1;
}
return (num);
}
}
