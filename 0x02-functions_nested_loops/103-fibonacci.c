#include <stdio.h>

/**
 * main - Entry point for the program.
 * Description: This program calculates the sum of even-valued terms
 * sequence whose values do not exceed 4,000,000 and prints the result.
 * Return: Always 0 to indicate successful execution.
 */
int main(void)
{
	long int sum = 0;
	long int first = 1;
	long int second = 2;
	long int next_term = 0;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}

		next_term = first + second;
		first = second;
		second = next_term;
	}

	printf("%ld\n", sum);

	return (0);
}
