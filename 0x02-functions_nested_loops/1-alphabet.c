#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	/* Place this statement inside the code block */
	_putchar('\n');
}
