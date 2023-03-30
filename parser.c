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
 *@f_list: list functions
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, data_t f_list[], va_list arg_list)
{
int k, j, newVal, printData;
printData = 0;
for (k = 0; format[k] != '\0'; k++)
{
if (format[k] == '%')
{
for (j = 0; f_list[j].parameter != NULL; j++)
{
if (format[k + 1] == f_list[j].parameter[0])
{
newVal = f_list[j].f(arg_list);
if (newVal == -1)
return (-1);
printData += newVal;
break;
}
}
if (f_list[j].parameter == NULL && format[k + 1] != ' ')
{
if (format[k + 1] != '\0')
{
_putcharf(format[k]);
_putcharf(format[k + 1]);
printData = printData + 2;
}
else
return (-1);
}
k = k + 1;
}
else
{
_putcharf(format[k]);
printData++;
}
}
return (printData);
}
