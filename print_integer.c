#include "main.h"

/**
 * print_integer - print a number is base 10
 * @list: Number to print in bas 10
 *
 * Return: Length of the number in decimal
 */
int print_integer(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, int), 10);

	size = print((p_buff != NULL) ? p_buffe : "NULL");

	return (size);
}
