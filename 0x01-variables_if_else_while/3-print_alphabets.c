#include <stdio.h>
/**
 * main - fucnction main prints the alphabet but different
 *
 * Return: return 0
 */

int main(void)
{
	char x;
	char y;

	x = 'a';
	y = 'A';

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
