#include <stdio.h>
#include <math.h>

long largestPrimeFactor(long n) {
    long maxPrime = -1;

    while (n % 2 == 0) {
        maxPrime = 2;
        n = n / 2;
    }

    for (long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
    }

    if (n > 2) {
        maxPrime = n;
    }

    return maxPrime;
}

int main(void) {
    long number = 612852475143;
    long result = largestPrimeFactor(number);

    printf("%ld\n", result);

    return 0;
}
