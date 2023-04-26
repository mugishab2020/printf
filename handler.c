#include "main.h"
/**
 * handler - format controller
 * @str: string inout
 * @list: the input lisy
 *
 * Return: The total siz of arguments
 */
int handler(const char *str, va_list list)
{
	int size, i, aux;

	size = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '%')
		{
			aux = percentage_handler(str, list, &i);
			if (aux == -1)
				return (-1);

			size += aux;
			continue;
		}
		_putchar(str[i]);
		 size = size + 1;
	}
	return (size);
}
/**
 * percentage_handler - function to hanlde percetage
 * @str: the strinf
 * @list: list of argumr=enrt
 * @i: the iterator
 *
 * Return: the size of the number of element
 */

int  percentage_handler(const char *str, va_list list, int *i)
{
	int size, j, number_formats;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};
	*i = *i + 1;
	if (str[*i] == '\0')
		return (-1);
	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);

	}

	number_formats = sizeof(formats) / sizeof(formats[0]);

	for (size = j = 0; j < number_formats; j++)
	{
		if (str[*i] == formats[j].fmt)
		{
			size = formats[j].fn(list);
			return (size);
		}
	}
	_putchar('%'), _putchar(str[*i]);
	return (2);
}
