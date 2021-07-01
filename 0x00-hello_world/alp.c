#include <stdio.h>

int main(void)
{
	char x;

	x = 'z';

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}									
	putchar('\n');

	return (0);
}
