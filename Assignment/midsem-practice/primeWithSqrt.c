#include <stdio.h>
#include <math.h>  // for sqrt()

int main() {
    int i, j;
    int isPrime;

    for (i = 2; i <= 100; i++) {
        isPrime = 1; // assume number is prime

        // check divisibility only up to sqrt(i)
        for (j = 2; j <= sqrt((double)i); j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;       // exit inner loop early
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
