#include <stdio.h>

/* Declaration of the _putchar function */
int _putchar(char c);

int main(void)
{
    /* Call _putchar to print "_putchar" */
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return (0);
}

/* Definition of the _putchar function */
int _putchar(char c)
{
    return write(1, &c, 1);
}
