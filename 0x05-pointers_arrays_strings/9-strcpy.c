#include "holberton.h"

/**
 * *strcpy - copys astring into another sring
 *
 */

char *_strcpy(char *dest, char *src)
{
	while (*src < '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
