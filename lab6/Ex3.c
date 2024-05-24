#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Point the pointer to the first element of the array
    ptr = arr;

    // Accessing array elements using pointers
    printf("Accessing array elements using pointers:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
