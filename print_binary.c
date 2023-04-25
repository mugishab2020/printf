#include "main.h"
/**
 * print_binary - function to print binary
 * @list: the number to be printed
 *
 * Return: the length of printed chars
 */
int print_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 2);

	size = print(p_buff);

	return (size);

}
