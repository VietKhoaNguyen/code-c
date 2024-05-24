#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a natural number greater than 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("The number must be greater than 1.\n");
        return 1;
    }

    printf("The divisors of %d are: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
