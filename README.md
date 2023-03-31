_printf team project

Group project: Ana María Cardona, Carlos Alfredo Montoya

0 : I'm not going anywhere. You can print it wherever you want. I'm here and I'm a Spur for life.

Write a function that produces an output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to terminate the output to strings)
writes the output to stdout, the standard output stream.
format is a character string. The format string consists of zero or more directives. See man 3 printf for details. The following conversion specifiers need to be handled:
c
s
%
You do not have to reproduce the buffer handling of the C library printf function.
You do not have to handle flag characters
Does not have to handle field width
You do not have to handle precision
You don't have to handle length modifiers

Development:  
-Implementation _print() function.
-Creation of main.h file : prototypes and structure.
-Creation of _putchar() functions.
-Creation of prinString, printChar() and parcer() functions; 
 
1: Education is when you read the fine print. Experience is what you get if you don't handle the following conversion specifiers:

Handle the following conversion specifiers:

d
i
You do not have to handle flag characters
You don't have to handle field width
You don't have to handle precision
You don't have to handle length modifiers.

Development:  
-Create function print_decimal_integer();
-Create function percent();
-Creation printNumbers();

 2. Just because it's printed doesn't mean it's gospel.
Create a man page for your function.

Create a man file for the function. man 3 printf



Examples of use _printF():
Print a string of characters: 
_printf("Hola, mundo!\n");

int edad = 25;
_printf("Tengo %d años.\n", edad);

float altura = 1.75;
_printf("Mi altura es %f metros.\n", altura);

char letra = 'a';
printf("La letra es %c.\n", letra);

