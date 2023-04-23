#include "main.h"
/**
 * print_char - function to print chars
 * @types: argumnets list
 * @buffer:buffer handling printing
 * @flags: the actiev flag we have
 * @width: get width
 * @precision: the specification of precision
 * @size: the size of chars
 * Return: the number of orinted hgars
 */
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
/**
 * print_string - function to print the string given
 * @types: arguments list
 * @buffer: buffer handling printing
 * @flags: active flags
 * @width: get width
 * @precision: specification of precision
 * @size: size of string
 * Return: number of characters printed
 */
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int length = 0, i;

	char *str = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);
	UNUSED(precision);

	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "  ";
	}

	while (str[length] != '\0')
		length++;
	if (precision >= 0 && precison < length)
		length = precision;
	if (width > length)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], length);
			for (i = width - length; i > 0; i--)
				write(1, " ", 1);
			return (width);
		}
		else
		{
			for (i = width - length; i > 0; i--)
				write(1, "", 1);
			write(1, &str[0], length);
			return (width);
		}
	}
	return (write(1, str, length));
}
/**
 * print_int - function to print intger
 * @types: the types of innput
 * @buffer: the buffer handling printing
 * @flags: the active flag that we have
 * @width: the width of input
 * @precision: the specified prcision
 * @size: the size of input/uotput
 * Return: the printed integer
 */
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int i - BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(types, long int);

	unsigned long int num;

	n = convert_size_number(n, size);

	if (n == 0)
		buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)n;

	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
		is_negative = 1;

	}
	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}
	i++;
	return (write_number(is_negative, i, buffer, flags, width, precision, size));
}
