#include <stdio.h>

// Function prototypes
int* bubbleSort(int arr[], int n);
int* insertionSort(int arr[], int n);
int* selectionSort(int arr[], int n);
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

    // Perform bubble sort
    printf("\nArray sorted using Bubble Sort:\n");
    int *sortedBubble = bubbleSort(arr, n);
    printArray(sortedBubble, n);

    // Perform insertion sort
    printf("\nArray sorted using Insertion Sort:\n");
    int *sortedInsertion = insertionSort(arr, n);
    printArray(sortedInsertion, n);

    // Perform selection sort
    printf("\nArray sorted using Selection Sort:\n");
    int *sortedSelection = selectionSort(arr, n);
    printArray(sortedSelection, n);

    return 0;
}

// Bubble Sort
int* bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

// Insertion Sort
int* insertionSort(int arr[], int n) {
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
    return arr;
}

// Selection Sort
int* selectionSort(int arr[], int n) {
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
    return arr;
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
