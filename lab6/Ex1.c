#include <stdio.h>

// Function prototype
float add(float *a, float *b);

int main() {
    float num1, num2;
    float sum;

    // Input the two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Call the add function and store the result in sum
    sum = add(&num1, &num2);

    // Print the sum
    printf("Sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);

    return 0;
}

// Function definition to add two float numbers using pointers
float add(float *a, float *b) {
    return (*a) + (*b);
}
