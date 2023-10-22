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
	unsigned long fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	for (i = 0; i < 49; i++)
	{
		printf("%lu, ", fibonacci[i]);
	}

	printf("%lu\n", fibonacci[49]);

	return (0);
}
