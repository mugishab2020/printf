#include "main.h"
/**
 * print_binary - function to print binaary
 * @type: the input type
 * @buffer: for printing
 * @flags: live flags
 * @width: get wodth
 * @precision: the specification of input
 * @size: get size
 * Return: the number of printed binary
 */

int print_binary(va_list type, char buffer[],
		int flags, int width, int precision, int size)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	n = va_arg(types, unsigned int);
	m = 2147483648;
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 32)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			count++;

		}
	}
	return (count);
}
/**
 * print_percent - function to print percent
 * @types: the type of input
 * @buffer: the beffer for printing
 * @flags: the live flag we are on
 * @width: thewidth of input
 * @precision: the specified preecision
 * @size: the output size
 * Return: the percentage sign
 */
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	return (write(1, "%%", 1));

}
/**
 * print_octal - function to print octal
 * @type: tyor of input
 * @buffer: Buffer for printing
 * @flags: live flags
 * @width: get width
 * @precision:
 * @size: get size
 * Return: the number of octal printed
 */
 int print_octal(va_list type, char buffer[],
		int flags, int width, int precision, int size)