#include <stdio.h>

int main() {
    int num, digit, product = 1;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Check if positive
    if (num <= 0) {
        printf("The number is not positive.\n");
        return 1;
    }

    // Calculate the product of digits
    while (num > 0) {
        digit = num % 10;  // Get the last digit
        product *= digit;  // Multiply the digit to the product
        num /= 10;         // Remove the last digit from the number
    }
    printf("Product of the digits: %d\n", product);

    return 0;
}
