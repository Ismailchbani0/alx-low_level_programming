#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: This program prints the specified text to the standard error.
 *              It does not use printf or puts. It returns 1.
 * Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
