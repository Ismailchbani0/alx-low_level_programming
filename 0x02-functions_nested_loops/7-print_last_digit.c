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
		last_digit = 8; /* Handle the special case of INT_MIN */
	}
	else
	{
		last_digit = (n < 0) ? -n % 10 : n % 10;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
