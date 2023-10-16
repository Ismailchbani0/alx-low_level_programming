#include "main.h"
#include <stdio.h>

/**
 * puts2 - Print every other character of a string, starting with the first character.
 * @str: The input string.
 *
 * Description: This function iterates through the input string and prints every
 * other character, starting with the first character. The output is followed by a newline.
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
