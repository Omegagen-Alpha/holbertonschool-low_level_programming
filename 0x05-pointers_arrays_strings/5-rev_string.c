#include "holberton.h"

/**
 * rev_string - function reverses a string
 */

void rev_string(char *s)
{
	{
		int i;
		int len = 0;
		char c;
		if (!s)
		return NULL;
		while(s[len] != '\0')
		{
		len++;
		}
		for(i = 0; i < (len/2); i++)
		{
			c = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = c;
		}
		return str;
