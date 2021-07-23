#include "holberton.h"

/*
 * _puts_recursion - function prints a string then adds a newline
 *
 * return: char
 *
 * *s: pointer var
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
	}
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
}

