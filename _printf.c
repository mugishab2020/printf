#include "main.h"

/**
 * _print - print function to hundle printing
 * @format: printing format of any word
 *
 * Return: size
 */

int _printf(const char *format, ...)
{
	int size;
	va_list list;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(list, format);

	size = handler(format, list);

	_putchar(-1);
	va_end(list);

	return (size);
}
