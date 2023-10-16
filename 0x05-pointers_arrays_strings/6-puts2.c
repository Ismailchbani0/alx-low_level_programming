#include "main.h"
#include <stdio.h>

void puts2(char *str)
{
	if (str == NULL)
		return;

	int i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)  // Check if the index is even
		{
		putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
