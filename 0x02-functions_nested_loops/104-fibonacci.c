#include <stdio.h>

/**
 * main - Entry point for the program.
 * Description: This program calculates and prints
 * starting with 1 and 2, separated by a comma and space.
 * Return: Always 0 to indicate successful execution.
 */
int main(void)
{
	unsigned long a = 1, b = 2;
	int count;

	printf("%lu, %lu, ", a, b);

	for (count = 3; count <= 98; count++)
	{ 
		unsigned long c = a + b;
		printf("%lu", c);
		if (count < 98)
			printf(", ");
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
