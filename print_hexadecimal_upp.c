#include "main.h"
int is_lowercase(char);
char *string_to_upper(char *);
/**
 * print_hexadecimal_upp - function to print uppercase hexadecimal
 * @list: the list of args
 * Return: the length of the string
 */
int print_hexadecimal_upp(va_list list)
{
	char *p_buff;
	int size;

	p_buff =  itoa(va_arg(list, unsigned int), 16);
	p_buff = string_to_upper(p_buff);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
/**
 * is_lowercase - fn to check the lowercase chars
 * @c: the input char
 * Return: 1/0
 */
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');

}
/**
 * string_to_upper - funct to upper
 * @s: the string to upper
 * Return: the uppercasee strinet number
 */
char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (is_lowercase(s[i]))
			s[i] = s[i] - 32;
	}
	return (s);
}
