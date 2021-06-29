#include "holberton.h"
void print_alphabet(void)
{
	char x;

	x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
		putchar('\n');

	return (0);
}
