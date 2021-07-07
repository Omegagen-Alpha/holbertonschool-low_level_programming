#include "holberton.h"
/**
 * _puts - function prints a tring and a nwline
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
