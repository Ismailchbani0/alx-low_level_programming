#include <stdio.h>

/**
 * main - Entry point for the program.
 * Description: This program calculates and prints
 * starting with 1 and 2, separated by a comma and space.
 * Return: Always 0 to indicate successful execution.
 */
int main(void)
{
	unsigned int a, b, sum;
	int count;

	a = 1;
	b = 2;
	sum = 0;

	printf("%u, %u, ", a, b);
	for (count = 3; count <= 98; count++)
	{
		sum = a + b;
		printf("%u", sum);
		if (count < 98)
		{
			printf(", ");
		}
		a = b;
		b = sum;
	}
	printf("\n");

	return (0);
}
