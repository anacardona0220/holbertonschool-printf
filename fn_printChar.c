#include "main.h"
/**
* print_char - writes strings
* @list: parameter
*
* Return: 0
*
*/
int print_char(va_list list)
{
_putcharb(va_arg(list, int));
return (1);
}
