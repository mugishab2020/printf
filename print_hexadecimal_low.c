#include "main.h"
/**
 * print_hexadecimal_low - fn to print hexadecimal in lower case
 * @list: number of args
 *
 * Return: length of yhe number
 *
 */
int print_hexadecimal_low(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
