#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character
 * @f: pointer
 * Return: 1 if on or 0 if otherwise
 */

int get_flag(char s, flags_t *f)
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
