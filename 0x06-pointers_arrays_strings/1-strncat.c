#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string to which src will be appended.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to concatenate from src.
 * Return: A pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Calculate the length of dest*/
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append the characters from src to dest, up to a maximum of n bytes*/
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Null-terminate the resulting string*/
	dest[dest_len + i] = '\0';

	return (dest);
}
