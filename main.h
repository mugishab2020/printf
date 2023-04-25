#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

typedef struct fmt
{
	char fmt;
	int (*fn)(va_list);
} format;

/**typedef struct fmt fmt_t;*/

int _strlen(const char *);
int _putchar(char);
int buffer(char);
int handler(const char *, va_list);
int  percentage_handler(const char *, va_list, int *);
int _printf(const char *format, ...);
/* Function to print chars and strings */
int print_char(va_list);
int print_string(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_rot(va_list);

/* Functionto print non printable character */
int print_pointer(va_list);
int print_rev_string(va_list);
int handler(const char *str, va_list list);
#endif /* MAIN_H */
