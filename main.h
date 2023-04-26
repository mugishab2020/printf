#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;
typedef struct fmt
{
	char fmt;
	int (*fn)(va_list);
} format;

/**typedef struct fmt for my parj fmt_t;*/

int _strlen(const char *);
int _puts(char *str);
int _putchar(char c);
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
/*custom function*/
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
/* get flag function*/
int get_flag(char s, flags_t *f);
/* Functionto print non printable character */
int print_pointer(va_list);
int print_rev_string(va_list);


char *convert(unsigned long int num, int base, int lowercase);

int print(char *);
char *itoa(long int, int);


#endif /* MAIN_H */
