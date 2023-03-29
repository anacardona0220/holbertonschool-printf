#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
typedef struct data
{
  char *tipo;
  int (*f)(va_list);
} data_t;
int _putcharf(char c);
int parser(const char *format, data_t fn[], va_list arg_list);
int _printf(const char *format, ...);
int p_c(va_list);
int p_s(va_list);
int p_p(va_list);
int p_d_i(va_list);
#endif
