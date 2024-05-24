#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int i;
    int min, max;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array dynamically
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and max with the first element of the array
    min = arr[0];
    max = arr[0];

    // Find the minimum and maximum numbers
    for (i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Display the results
    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    // Free the allocated memory
    free(arr);

    return 0;
}
