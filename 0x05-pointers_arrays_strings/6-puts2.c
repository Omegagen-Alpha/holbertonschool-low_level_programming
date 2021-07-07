#include "holberton.h"
/**
 * _puts - function prints a tring and a nwline
 *
 */

 void puts2(char *str)
{
	while (*str != '\0')
		{
			_putchar(*str);
			str++;
			str++;
		}
	_putchar('\n');
}
