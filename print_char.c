#include "main.h"
/**
 * print_char - function to print character
 * @list: the input characters
 *
 * Return: 1 fir success
 */
int print_char(va_list list)
{
	int aux;

	aux = va_arg(list, int);

	_putchar(aux);

	return (1);
}
