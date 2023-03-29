#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format.
 * @format: character string
 * Return: number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, j = 0, count = 0;
format_t f_list[] = {
{"c", print_char},
{"s", print_str},
{"%", print_percent},
{"i", print_int},
{"d", print_int},
{NULL, NULL}
};
va_start(args, format);
while (format && format[i])

{
if (format[i] == '%')
{
j = 0;
while (f_list[j].type)
{
if (format[i + 1] == f_list[j].type[0])
{
count += f_list[j].func(args);
i++;
break;
j++;
}
if (!f_list[j].type)
{
putchar(format[i]);
count++;
}
else
{
putchar(format[i]);
count++;
}
i++;
}
va_end(args);
return (count);
}
}
