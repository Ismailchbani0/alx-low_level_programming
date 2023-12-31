#include <stdio.h>

/**
 * main - Entry point of the Fizz-Buzz program.
 * Description: Prints numbers from 1 to 100 with the following rules:
 * 1. For multiples of three, print "Fizz" instead of the number.
 * 2. For multiples of five, print "Buzz" instead of the number.
 * 3. For numbers that are multiples of both three and five, print "FizzBuzz".
 * Return: Always 0 (success).
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
