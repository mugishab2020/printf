#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define	F_SPACE 16
/* SIZE */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format
 * @fn: The function associated
 */
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
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
		int flags, int width, int precision, int size);

/* Function to print chars and strings */
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Function to print numbers */
int print_integer(va_list);
int print_binary(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_rot(va_list);

/* Functionto print non printable characters */
int print_non_printable(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* Function to print memory address */
int print_pointer(va_list);

/**
 * int print_pointer(va_list types, char buffer[], int flags, int width, int precision, int size);
 *
*int print_pointer(va_list types, char buffer[],
*		int flags, int width, int precision, int size);
 Function to handle other specifiers*/
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_rev_string(va_list);

/* width handler */
int handler(const char *str, va_list list);
int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char buffer[], int flags,
		int width, int precision, int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
		int width, int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind, char buffer[],
			int flags, int width, int precision, int size);

/*******************UTILS*****************/
int is_printable(char c);
int apped_hexa_code(char ascii, char buffer[], int i);
int is_digit(char c);

long int conver_size_number(long int num, int size);
long int conver_size_unsgnd(unsigned long int num, int size);

#endif /* MAIN_H */
