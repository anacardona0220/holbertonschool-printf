#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * p_d - its used to print integer and decimal
 * @args: parameter
 *
 *
 * Return: 0
*/
int p_d_i(va_list list)
{
int nLength;
nLength = p_d(list);
return (nLength);
}
int p_d(va_list args)
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
int p_c(va_list list)
{
_putcharf(va_arg(list, int));
return (1);
}
int p_s(va_list list)
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
int p_p(__attribute__((unused))va_list list)
{
_putcharf('%');
return (1);
}

