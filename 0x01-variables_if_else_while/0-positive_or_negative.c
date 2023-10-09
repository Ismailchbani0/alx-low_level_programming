#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number and prints whether it's positive,
 *              negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() % 201 - 100; /* Generates a random number between -100 and 100 */

    printf("%d is ", n);

    if (n > 0)
        printf("positive\n");
    else if (n < 0)
        printf("negative\n");
    else
        printf("zero\n");

    return (0);
}
I have corrected the issue in the code, and now it should produce the expected output for positive, negative, and zero values of n.






