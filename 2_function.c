#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_non_printable - Prints ascii codes in hexa of non printable chars
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_non_printable(va_list types, char buffer[],
		 int width, int precision, int size)
{
	int i;
	char *str = va_arg(types, char *);
	int count = 0;

	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_printable(str[i]))
		{
			buffer[count] = str[i];
			count++;
		} else
		{
			count += apped_hexa_code(str[i], buffer, count);
		}
	}
	return (write(1, buffer, count));
}

/****************Print Pointer************/

/**
 * print_pointer - Prints the value of a pointer variable
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed.
 */
int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char extra_c = 0, padd = ' ';
	int ind = BUFF_SIZE - 2, length = 2, padd_str = 1; /* length=2, for '0x' */
	unsigned long numaddrs;
	char map_to[] = "0123456789abcdef";
	void *addrs = va_arg(types, void *);

	UNUSED(width);
	UNUSED(size);
	UNUSED(precision);

	if (addrs == NULL)
		return (write(1, "(nil)", 5));

	buffer[BUFF_SIZE - 1] = '\0';

	numaddrs = (unsigned long)addrs;

	while (numaddrs > 0)
	{
		buffer[ind--] = map_to[numaddrs % 16];
		numaddrs /16;
		length++;
	}

	if ((flags & F_ZERO) && !(flags & F_MINUS))
		padd = '0';
	if (flags & F_PLUS)
		extra_c = '+', length++;
	else if (flags & F_SPACE)
		extra_c = ' ', length++;

	ind++;

	return (write_pointer(buffer, ind, length,
				width, flags, padd, extra_c, padd_str));
}
