#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, followed by a new line.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL || n <= 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]); /* Print the integer */

		if (i < n - 1)
		{
			printf(", "); /* Print a comma and space for elements other than the last one */
		}
	}

	printf("\n"); /* Print a newline */
}
