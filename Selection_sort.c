#include <stdio.h>

void selectionSort(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    // Define the array size
    const int n = 6;
    int arr[n];

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Perform selection sort
    printf("\nArray sorted using Selection Sort:\n");
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap arr[i] and arr[min_index]
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// ---------------------//
// use no void:
