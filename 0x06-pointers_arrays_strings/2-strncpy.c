#include "main.h"

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: The destination string where the copy will be stored.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from src.
 * Return: A pointer to the resulting string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest, up to a maximum of n characters*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If there are fewer than n characters in src, fill the remaining with '\0'*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
