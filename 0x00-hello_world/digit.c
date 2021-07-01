#include <stdio.h>

int main(void)
{
	long int a;
	long int b;
	long int c;
	a = 48;
	b = 49;
	c = 50;

	while (a <= 55)
	{
		putchar(a);
		putchar(b);
		putchar(c);
		putchar(',');
		putchar(' ');

		if (c < 57)
		{
			c++;
		}
		else if (b < 56)
		{
			b++;
			c = (b + 1);
		}
		else if (a < 55)
		{
			a++;
			b = (a + 1);
			c = (b + 1);
		}
		else 
		{
			putchar('\n');
				a++;
		}
	}
	

	return (0);

}
