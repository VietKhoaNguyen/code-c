#include <stdio.h>

void insertionSort(int arr[], int n);
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
     // Perform insertion sort
    printf("\nArray sorted using Insertion Sort:\n");
    insertionSort(arr, n);
    printArray(arr, n);
}
// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
