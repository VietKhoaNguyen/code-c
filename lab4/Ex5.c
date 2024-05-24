#include <stdio.h>

// Function to calculate x^n using iteration
double power_iterative(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

// Function to calculate x^n using recursion
double power_recursive(double x, int n) {
    if (n == 0) {
        return 1.0;
    } else {
        return x * power_recursive(x, n - 1);
    }
}

int main() {
    double x;
    int n;

    // Prompt the user to enter the base and the exponent
    printf("Enter the base (x): ");
    scanf("%lf", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    // Calculate and display the result using iterative function
    double result_iterative = power_iterative(x, n);
    printf("Result of %lf^%d using iteration = %.2lf\n", x, n, result_iterative);

    // Calculate and display the result using recursive function
    double result_recursive = power_recursive(x, n);
    printf("Result of %lf^%d using recursion = %.2lf\n", x, n, result_recursive);

    return 0;
}
