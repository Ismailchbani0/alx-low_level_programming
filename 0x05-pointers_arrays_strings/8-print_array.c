#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i; // Declare the loop counter variable

	if (a == NULL || n <= 0)
		return;

	for (i = 0; i < n; i++)
	{
		_putchar('0' + a[i]); // Convert and print the integer as a character

		if (i < n - 1)
		{
			_putchar(','); // Print a comma
			_putchar(' '); // Print a space
		}
	}

	_putchar('\n'); // Print a newline
}
