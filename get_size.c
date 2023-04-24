#include "main.h"
/**
 * get_size - function to return size of catsed argument
 * @format: the formated string to print
 * @i: the list of arguments
 * Return: the size of arguments
 */
int get_size(const char *format, int *i)
{
	int curr = *i + 1;
	int size = 0;

	if (format[curr] == 'l')
		size = S_LONG;
	else if (format[curr] == 'h')
		size = S_SHORT;
	if (size == 0)
		*i = curr - 1;
	else
		*i = curr;
	return (size);
}
