#include "main.h"

/**
 * print_string - loops through string and prints every chararcter
 * @l: arguments
 * @f: pointer
 * Return: number of char printed
 */

int print_string(va_list l, flags_t *f)
{
char *s = va_arg(l, char *);

(void)f;

if (!s)
s = "(null)";
return (_puts(s));
}

/**
 * print_char - prints a character
 * @l: arguments
 * @f: pointer
 * Return: number of chararcters printed
 */

int print_char(va_list l, flags_t *f)
{
(void)f;
_putchar(va_arg(l, int));
return (1);
}
