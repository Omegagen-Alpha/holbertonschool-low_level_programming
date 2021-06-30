#include <stdio.h>

/**
* main - function main balblabla
*
* Return: return balblabva
*/

int main(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		if (x == 'e')
		{
			x++;
		}
		else if (x == 'q')
		{
			x++;
		}
		else 
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');

	return (0);
}

