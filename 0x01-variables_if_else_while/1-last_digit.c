#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - function main balblabla
 *
 * Return: return balblabva
*/
/* betty style doc for function main goes there */

int main(void)
{
	int n;
	int R;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	R = (n % 10 + 0);
	if (R > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, R);
	}
	else if (R == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, R);
	}
	else if (R < 6 && R != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, R);
	}
	/* your code goes there */
	return (0);
}
