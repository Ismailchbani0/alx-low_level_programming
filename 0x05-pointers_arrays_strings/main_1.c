#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Lorem ipsum..."; // Your input string

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] <= 126) {
            _putchar(str[i]);
        }
    }

    _putchar('\n');
    return (0);
}
