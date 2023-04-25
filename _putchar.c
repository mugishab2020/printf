#include "main.h"
/**
 * _putchar - function to write character to stdout
 * @c: the charcher
 *Return: 1 on success
 */
int _putchar(char c)
{
	return (buffer(c));
}
/**
 * buffer - function to save the character
 * @c: the chaarcter
 * Return: 1
 */
int buffer(char c)
{
	static char buff[1024];
	static int a;

	if (c == -1 || a == 1024)
	{
		write(1, buff, a);
		a = 0;
	}
	if (c != -1)
		buff[a++] = c;
	return (1);
}
