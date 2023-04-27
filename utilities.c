#include "main.h"
/**
 * _strlen - function to find length of the string
 *
 * @str: the input string
 * Return: the size of the string
 */
int _strlen(const char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
		;
	return (a);
}
/**
 * print - function to print char
 * @str: string input
 * Return: the number of chars printd
 */
int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
