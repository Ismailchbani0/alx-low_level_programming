#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search in
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to compare values
 *
 * Return: index of the first element for which cmp function does not return 0,
 *         -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++
		}
	return (-1);
}
