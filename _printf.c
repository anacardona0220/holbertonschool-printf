#include "main.h"
/**
 * _printf - program print to print
 * @format: parameter
 *
 * Return: 0
 *
 */
int _printf(const char *format, ...)
{
int num; data_t fn[] = {
{"c", p_c},
{"s", p_s},
{"%", p_p},
{"d", p_d_i},
{"i", p_d_i},
{NULL, NULL}
};
va_list arguments;
if (format == NULL)
return (-1);
va_start(arguments, format);
num = parser(format, fn, arguments);
va_end(arguments);
return (num);
}
