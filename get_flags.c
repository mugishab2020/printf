#include "main.h"
/**
 * get_flags - finction toturn active flags
 * @s: the character to hold active flag
 * @f: the pointer to struct
 *
 * Return: 1 if flag is found
 */
int get_flags(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
	}
