#include <stdio.h>

/**
 * main - Entry point for the program.
 * Description: This program calculates and prints
 * starting with 1 and 2, separated by a comma and space.
 * Return: Always 0 to indicate successful execution.
 */
int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long sum;

	printf("%lu, %lu, ", a, b);

	for (i = 3; i <= 200; i++)
	{
		sum = a + b;
		printf("%lu", sum);

		if (i < 98)
		{
			printf(", ");
		}
        
		a = b;
		b = sum;
	}

	printf("\n");

	return (0);
}
