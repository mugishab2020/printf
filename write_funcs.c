#include "main.h"
#include <unistd.h>

/**
 * _puts - print a string to stdout
 * @str: pointer to string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
