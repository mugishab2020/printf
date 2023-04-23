#include "main.h"
/**
 * print_hexadecimal - function to print hexadecimal
 * @types: the list of arguments
 * @buffer: the buffer to handle printing
 * @flags: active flags
 * @width: get width
 * @precision:specification of precision
 * @size: get size
 * Return: number of hex nua_decimal printed
 */
int print_hexadecimal(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
return (print_hexa(types, "0123456789abcdef", buffer, flags, 'x',
			width, precision, size));

}
/**
 * print_hexa_upper - function to print hexa in uppercase
 * @types: list of arguments
 * @buffer: the buffer handling printins
 * @flags: the active flag
 * @width: get width
 * @precision: the specified precision
 * @size: get size
 * Return: the number of hexa printed
 */
int print_hexa_upper(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789ABCDEF", buffer,
				flags, 'X', width, precision, size));
}
/**
 * print_hexa - printing hexadecimal upper and lower
 * @types: list if arguents
 * @map_to: array of hex numbers to map to
 * @buffer: the buffer handling printings
 * @flag_ch: active flag
 * @flags: the active
 * @width: get flag
 * @precision: precision specification
 * @size: get size
 * Return: the number of hexa decimal printed
 */
int print_hexa(va_list types, char map_to[],
		char buffer[], int flags, char flag_ch, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int number = va_arg(types, unsigned long int);
	unsigned long int init_number = number;


	UNUSED(width);

	number = convert_size_unsgnd(number, size);

	if (number == 0)
		buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';

	while (number > 0)
	{
		buffer[i--] = map_to[number % 16];
		number /= 16;

	}
	if (flags & F_HASH && int_number != 0)
	{
		buffer[i--] = flag_ch;
		buffer[i--] = '0';
	}
	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
