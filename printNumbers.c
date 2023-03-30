#include "main.h"
/**
 * print_numbers - its used to print integer and decimal
 * @args: parameter
 * Return: 0
 */
int print_numbers(va_list args)
{
int res;
int sizeArgs;
int division;
unsigned int num;
res = va_arg(args, int);
division = 1;
sizeArgs = 0;
if (res < 0)
{
sizeArgs += _putcharf('-');
num = res * -1;
}
else
{
num = res;
}
for (; num / division > 9;)
{
division *= 10;
}
for (; division != 0;)
{
sizeArgs += _putcharf('0' + num / division);
num %= division;
division /= 10;
}
return (sizeArgs);
}
