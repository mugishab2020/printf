#include "main.h"
/**
 * itoa- functionnto convert base
 * @num: the input number
 * @base: the base to convert to
 *
 * Return: chars
 */
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char signe = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		signe = '-';

	}
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);
	
	if (signe)
		*--ptr = signe;
	return (ptr);
}
