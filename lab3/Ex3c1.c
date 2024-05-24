#include <stdio.h>

double sum_of_series(int n) {
    double total_sum = 0.0;
    for (int i = 1; i <= n; i++) {
        total_sum += 1.0 / i;
    }
    return total_sum;
}

int main() {
    int n;
    printf("Enter an integer n: ");
    scanf("%d", &n); // Read the input integer

    double result = sum_of_series(n);
    printf("The sum of the series 1 + 1/2 + 1/3 + ... + 1/%d is: %f\n", n, result);

    return 0;
}
