#include "main.h"

/**
 * print_string - Print string from the list
 * @list: list
 *
 * Return: string length
 */

int print_string(va_list list)
{
	char *p;
	int p_len;

	p = va_arg(list, char*);
	p_len = print((p != NULL) ? p : "(null)");

	return (p_len);
}
