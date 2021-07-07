#include "holberton.h"

/**
 * print_rev - function does puts in reverse
 */

void print_rev(char *s)
{
	*s = '\0';
	while (*s != 0)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
