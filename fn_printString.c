#include "main.h"
/**
* print_string - Prints a string
* @list: list of arguments
* Return: Will return the amount of characters printed.
*/
int print_string(va_list list)
{
int k;
char *cadena;
cadena = va_arg(list, char *);
if (cadena == NULL)
cadena = "(null)";
for (k = 0; cadena[k] != '\0'; k++)
_putcharb(cadena[k]);
return (k);
}
