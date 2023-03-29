#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
typedef struct changing
{
char *tipo;
int (*f)(va_list);
} changing_t;
int _putcharf(char c);
int parser(const char *format, changing_t fn[], va_list arg_list);
int _printf(const char *format, ...);
int p_c(va_list);
int p_s(va_list);
int p_p(va_list);
int p_d_i(va_list);
#endif
