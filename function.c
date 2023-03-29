#include "main.h"
#include <stdio.h>
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
<<<<<<< HEAD
num += printf("%c", va_arg(argumentos, int));
=======
num += printf("%c", va_arg(argumentos, char *));
>>>>>>> 15608fbea5d66aa8df1109767f2b1d7ca879cf41
break;
case 'i':
num += printf("%i", va_arg(argumentos, int));
break;
default:
<<<<<<< HEAD
_putchar(37);
_putchar(format);
=======
fprintf(stderr "formato invalido : %c/n", format);
>>>>>>> 15608fbea5d66aa8df1109767f2b1d7ca879cf41
return -1;
}
return (num);
}
