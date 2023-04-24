#include "main.h"
/**
 * print_reverse - function to reverse the input string
 * @types: list of arguments
 * @buffer: buffer to handle printing
 * @flags: the active flags
 * @width: get width
 * @precision: Precison specified
 * @size: get size
 * Return: the reversed string
 */
int print_reverse(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char *str;
	int i, count = 0;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);

	str = va_arg(types, char *);

	if (str == NULL)
	{
		UNUSED(precision);

		str = ")Null(";
	}

	for (i = 0; str[i]; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		char z = str[i];

		write(1, &z, 1);
		count++;
	}
	return (count);
}
