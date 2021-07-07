#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;
	int *d;

	d = &c;
	
	*d = *a;
	*a = *b;
	*b = *d;
}
