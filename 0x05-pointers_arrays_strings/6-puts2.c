#include "main.h"
#include <stdio.h>

void puts2(char *str)
{
	int i; // Declare variables at the beginning of the function

	if (str == NULL)
	return;

	i = 0; // Initialize the variable here
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
