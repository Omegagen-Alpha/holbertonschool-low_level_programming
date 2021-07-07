#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function prints out an array
 *
 */

void print_array(int *a, int n)
{
	int i;
	i = 0;
	while (i <= (n - 1))
	{
		printf("%d", *a);
		if (i != (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
		else if (i == (n - 1))
		{
			putchar('\n');
		}
		i++;
		a++;
	}
}
