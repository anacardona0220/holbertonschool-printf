#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - prints a character
 * @arg: character to print
 * Return: 1
 */
int print_char(va_list arg)
{
    char c = va_arg(arg, int);

    putchar(c);
    return (1);
}

/**
 * print_str - prints a string
 * @arg: string to print
 * Return: number of characters printed
 */
int print_str(va_list arg)
{
    char *str = va_arg(arg, char *);
    int i = 0;

    if (str == NULL)
        str = "(null)";

    while (str[i])
    {
        putchar(str[i]);
        i++;
    }

    return (i);
}

/**
 * print_percent - prints a percent symbol
 * @arg: percent symbol to print
 * Return: 1
 */
int print_percent(__attribute__((unused))va_list arg)
{
    putchar('%');
    return (1);
}
/**
 * print_int - prints an integer
 * @arg: integer to print
 * Return: number of characters printed
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int div = 1, len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		if (n == INT_MIN)
		{
			_write("2147483648", 10);
			return (10);
		}
		n = -n;
	}
	while (n / div >= 10)
		div *= 10;
	while (div != 0)
	{
		len += _putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
	return (len);
}

