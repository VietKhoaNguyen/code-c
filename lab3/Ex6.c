#include <stdio.h>

int main() {
    int n;
    int factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}
