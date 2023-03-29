#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numberDI - its used to print integer and decimal
 * @args: parameter
 *
 *
 * Return: 0
 */

int print_numberDI(va_list args)
{
int n, length, div;
unsigned int num;
n = va_arg(args, int);
div = 1;
length = 0;
if (n < 0)
{
length += _putcharf('-');
num = n * -1;
}
else
{
num = n;
}
for (; num / div > 9;)
{
div *= 10;
}
for (; div != 0;)
{
length += _putcharf('0' + num / div);
num %= div;
div /= 10;
}
return (length);
}


/**
 * print_decimal_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_decimal_integer(va_list list)
{
int nLength;
nLength = print_numberDI(list);
return (nLength);
}

/**
 * print_char - writes strings
 * @list: parameter
 *
 * Return: 0
 *
 */

int print_char(va_list list)
{
_putcharf(va_arg(list, int));
return (1);
}

/**
 * print_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putcharf(str[i]);
	return (i);
}
