#include <stdio.h>
#include <math.h>

/**
 * largestPrimeFactor - Find the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 * Return: The largest prime factor of the number @n.
 */
long largestPrimeFactor(long n)
{
	long maxPrime = -1;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n = n / 2;
	}

	for (long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		maxPrime = n;
	}

	return (maxPrime);
/**
 * main - Entry point for the program.
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	long result = largestPrimeFactor(number);

	printf("%ld\n", result);

	return (0);
}
