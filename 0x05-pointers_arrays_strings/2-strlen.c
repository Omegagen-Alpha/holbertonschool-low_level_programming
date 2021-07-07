#include "holberton.h"
/**
 *main - check the code for Holberton School students.
 *
 *Return: Always 0.
 **/

int _strlen(char *s)
{
	int fin = 0;
	while (*s != '\0')
	{
		s++;
		fin++;
	}
	return fin;
}
