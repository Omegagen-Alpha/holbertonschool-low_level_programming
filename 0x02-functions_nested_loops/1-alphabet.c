#include <stdio.h>
#include "holberton.h"
/**
 * main - function prints the alphabet
 *
 * Return: who knows
 */
	void print_alphabet(void)
	{
		char x;

		x = 'a';

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
