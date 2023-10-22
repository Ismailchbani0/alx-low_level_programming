#include <stdio.h>

/**
 * main - Entry point for the program.
 * Description: This program calculates and prints
 * below 1024. It uses a loop to find and add the multiples.
 * Return: Always 0 to indicate successful execution.
 */
int main(void)
{
	int sum = 0;
	int number;

	for (number = 3; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			sum += number;
		}
	}

	printf("%d\n", sum);

	return (0);
}
