#include "main.h"
/**
* _puntchar - function to print
* _process_format - process the format
*@format: char
*@num: int
*/
int _putchar(char c)
{
return putchar(c);
}
int _process_format(char format, va_list argumentos)
{
int num = 0;
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
case '%':
num += printf("%c", format);
break;
default: 
return -1;
}
return (num);
}
