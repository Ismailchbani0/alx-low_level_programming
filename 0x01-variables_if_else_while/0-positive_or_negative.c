#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
