#include "main.h"
#include <stdio.h>

/**
 * puts2 - Print every other character of a string.
 * @str: The input string.
 *
 * Description: This function iterates through
 * other character, starting with the first character.
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
		return;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
