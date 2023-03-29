#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct changing
{
char *rm;
int (*f)(va_list);
} changing_t;

int _putcharf(char c);
int parser(const char *format, changing_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_decimal_integer(va_list);
#endif
