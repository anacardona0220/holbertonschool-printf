#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @fn: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, changing_t f_list[], va_list arg_list)
{
int i, j, r_val, printed_chars;
printed_chars = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%') 
{
for (j = 0; f_list[j].rm != NULL; j++)
{
if (format[i + 1] == f_list[j].rm[0])
{
r_val = f_list[j].f(arg_list);
if (r_val == -1)
return (-1);
printed_chars += r_val;
break;
}
}
if (f_list[j].rm == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_putcharf(format[i]);
_putcharf(format[i + 1]);
printed_chars = printed_chars + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_putcharf(format[i]); /*call the write function*/
printed_chars++;
}
}
return (printed_chars);
}


/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putcharf('%');
	return (1);
}
