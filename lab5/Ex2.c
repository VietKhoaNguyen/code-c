#include <stdio.h>

int main() {
    int n, i;
    int sum_even = 0, sum_odd = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum of even and odd numbers
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        } else {
            sum_odd += i;
        }
    }

    // Display the sum of even and odd numbers
    printf("Sum of even numbers from 1 to %d is: %d\n", n, sum_even);
    printf("Sum of odd numbers from 1 to %d is: %d\n", n, sum_odd);

    return 0;
}
