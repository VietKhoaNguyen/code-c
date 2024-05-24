#include <stdio.h>

int main() {
    int n, i, j;
    int isPrime;

    // Input the value of n
    printf("Enter a natural number greater than 1: ");
    scanf("%d", &n);

    // Check if n is greater than 1
    if (n <= 1) {
        printf("Please enter a natural number greater than 1.\n");
        return 1;
    }

    // Print prime numbers from 2 to n
    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume i is prime initially

        // Check if i is divisible by any number from 2 to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        // If isPrime is still true, then i is prime
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
