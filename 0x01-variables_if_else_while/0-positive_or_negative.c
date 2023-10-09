#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program assigns a random number to the variable n and
 * prints whether it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));  /* Seed for random number generation */

	n = rand() - RAND_MAX / 2;  /* Assign a random number to n */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
