#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare
 * Return:
 *   - 0 if the strings are equal
 *   - A negative value if s1 is less than s2
 *   - A positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare each character in s1 and s2*/
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	/* Return the difference between the ASCII values*/
	return (s1[i] - s2[i]);
}
