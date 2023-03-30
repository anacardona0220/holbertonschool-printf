#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_decimal_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_decimal_integer(va_list list)
{
int nLength;
nLength = print_numbers(list);
return (nLength);
}
