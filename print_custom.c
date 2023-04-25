#include "main.h"
/**
 * print_bigS - function for non printable chars
 * @l: the list of args
 * @f: the pointer to struct flags
 * Return: number of char printed
 */
int print_bigS(va_list l, flags_t *f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		return (_putchar("(null)"));

	for (i = 0; s[i], i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_putchar("\\x");
			count += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}
/**
 * print_rev - printing string reversed
 * @l: the list of args
 * @f: the pointer to struct flags
 * Return: the length of printed chars
 */
int print_rev(va_list l, flags_t *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
/**
 * print_rot13 - function to print rot 13
 * @l: the list of arguments
 * @f: the poinet
 * Return: the length of string printed
 *
 */
int print_rot13(va_list l, flags_t *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}
	return (j);
}
/**
 * print_percent - function to print percrnt
 * @l: list of arguments
 * @f: poiner t struct flags
 * Return: (number of printed chars)
*/
int print_percent(va_list l, flags_t *f)
{
(void)l;
(void)f;

return (_putchar('%'));
}
