#include "main.h"
/**
 * is_printable - unction to check printable character
 * @c: the input character
 * Return: 1 for printable 0 for not printable
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
/**
 * is_digit - function to check for digits
 * @c: the input character
 *
 * Return: 1 for digit 0  for non digits
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);

}
/**
 * apped_hexa_code - function to append asciii to hexa
 * @buffer: the chars arry
 * @i: the index to nabigate
 * @ascii: the ascii codes
 * Return: 3 always
 */
int apped_hexa_code(char ascii, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii < 0)
		ascii *= -1;
	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii / 16];
	buffer[i] = map_to[ascii % 16];
	return (3);
}
