#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        printf("Please enter a positive size.\n");
        return 1;
    }

    int arr[n];
    int sum = 0;

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of array elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("Sum of all elements in the array is: %d\n", sum);

    return 0;
}
