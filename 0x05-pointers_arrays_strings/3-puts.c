#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 *
 * Return: The number of characters written, which is always 1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * _puts - Prints a string, followed by a new line.
 * @str: A pointer to a string.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
