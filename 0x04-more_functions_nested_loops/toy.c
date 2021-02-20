#include <stdio.h>

int main(void)
{
	int size;
	int a;
	int b;
	int c;
	size = 5;
	for(a=1; a <= size; a++)
	{
		for(b=(size -a); b <= size; b++)
		{	printf(" ");
			for(c=(size -b); c <= size; c++)
			printf("#");
		}
			printf("\n");
	}
	return (0);
}
