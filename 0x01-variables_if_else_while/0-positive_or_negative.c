#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* Main Function  will assign a random number to the variable n each time it is executed.*/
/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n");
	}	
	else if (n == 0)
	{
		printf("%d is zero\n");
	}
	else if (n < 0)
	{
		printf("%d is negative\n");	
	}
	/* your code goes there */
	return (0);
}
