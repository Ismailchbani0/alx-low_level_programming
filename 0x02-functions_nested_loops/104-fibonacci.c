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
	unsigned long long a = 1;
	unsigned long long b = 2;
	unsigned long long sum;

	printf("%llu, %llu, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		sum = a + b;
		printf("%llu", sum);

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
