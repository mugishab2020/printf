#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * handle_print - Print an argument based on its type
 * @fmt: Formatte string in which to peint the arguments
 * @ind: Ind
 * @list: List of arguments to printed
 * @buffer: buffer array to handle print
 * @flags: calculate active flag
 * @width: get width
 * @precision: precision specification
 * @size: size specifier
 * Return: 1 or 2
 */
int handle_print(const char *fmt, int *ind, va_list list, char buffer[]
		, int flags, int width, int precision, int size)
{
	int i, unknown_len = 0, printed_chars = -1;
	fmt_t fmt_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
<<<<<<< HEAD
		{'u', print_unsignd}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper}, {'p', print_pointer},
		{'S', print_non_printable}, {'r', print_reverse}, {'R', print_string},
=======
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper}, {'p', print_pointer},
		{'S', print_non_printable}, {'r', print_reverse}, {'R', print_rot13string},
>>>>>>> ebc8fb7d38aac02e0af41ab47ebea9b61ae4f178
		{'\0', print_NULL}
	};
	for (i = 0; fmt_types[i].fmt != '\0'; i++)
	{
		if (fmt[*ind] == fmt_types[i].fmt)
			return (fmt_types[i].fn(list, buffer, flags, width, precision, size));
	}

	if (fmt_types[i].fmt == '\0')
	{
		if (fmt[*ind] == '\0')
			return (-1);
		unknown_len += write(1, "%%", 1);
		if (fmt[*ind - 1] == '')
			unknown_len += write(1, "", 1);
		else if (width)
		{
			--(*ind);
			while (fmt[*ind] != '' &&(fmt[*ind] != '%'))
			{
				--(*ind);
			}
			if (fmt[*ind] == '')
				--(*ind);
			return (1);
		}
		 unknown_len += write(1, &fmt[*ind], 1);
		return (unknown_len);
	}
	return (printed_chars);
}
