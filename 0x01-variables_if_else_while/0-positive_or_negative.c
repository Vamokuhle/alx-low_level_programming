#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *  main - Determines if a number is positve, negative or zero.
 *
 *  Return Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(o));
	n = rand() - RAND_MAX / 2;
	IF (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
		{
			printf("%d is negative\n", n);
		}
		return (0);
	}
