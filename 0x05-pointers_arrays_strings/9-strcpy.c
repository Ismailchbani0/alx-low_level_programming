#include "main.h"

/**
 * _strcpy - Copies a string, including the null byte, from src to dest.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; // Add the null terminator to the destination string

	return dest_start;
}
