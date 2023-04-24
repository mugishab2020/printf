#include "main.h"
/**
 * conver_size_number - function to convert size of number
 * @num: theinput nnumnber
 * @size: the number of bytes to be casted
 * Return: the casted value of num
 */
long int conver_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);

	else if (size == s_SHORT)
		return ((short)num);
	return ((int)num);
}
/**
 * conver_size_unsgnd - function to cast numbet to specifird size
 * @num: input number
 * @size: number to be casyed
 * Return: the casted value of num
 */
long int conver_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int)num);
}
