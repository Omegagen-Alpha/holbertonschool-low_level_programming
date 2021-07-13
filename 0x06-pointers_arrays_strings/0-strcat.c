#include "holberton.h"

/**
 * *_strcat -  function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int *c;

	c = &i
	*c = 0;

	while (*dest > '\0')
	{
		*c++;
		dest++;
	}
	dest = *c;
	while (*src >= '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	dest = 0;
	while (*dest > '\0')
	{
		_putchar(*dest);
		dest++;
	}
	_putchar('\n');
}
