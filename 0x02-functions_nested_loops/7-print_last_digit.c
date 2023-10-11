#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8; // Special case for INT_MIN
	}
	else
	{
		if (n < 0)
			last_digit = -(n % 10);
		else
			last_digit = n % 10;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
