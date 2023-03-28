#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
/*
* _printf - funtion printf
*_process_format - process the format
*@format: char
*/
int _putchar(char c);
int _process_format(char format, va_list argumentos);
int _printf(const char *format, ...);

#endif
