#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct format - Struct format
 *
 * @type: The conversion specifier
 * @func: The function pointer to the right function
 */
typedef struct format
{
char *type;
int (*func)(va_list);
} format_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(va_list arg);
int print_int(va_list arg);

#endif
