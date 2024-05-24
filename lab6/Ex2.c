#include <stdio.h>

void swap(float *a, float *b);

int main() {
    float num1 = 5.5, num2 = 10.5;

    printf("Before swapping: num1 = %.2f, num2 = %.2f\n", num1, num2);

    // Call the swap function
    swap(&num1, &num2);

    printf("After swapping: num1 = %.2f, num2 = %.2f\n", num1, num2);

    return 0;
}

// Function definition to swap two float variables using pointers
void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}
