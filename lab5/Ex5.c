#include <stdio.h>

void inputMatrix(int A[][10], int n);
void printMatrix(int A[][10], int n);
int sumMatrix(int A[][10], int n);
void transposeMatrix(int A[][10], int n);
void gaussianElimination(int A[][10], int n);
int determinant(int A[][10], int n);
void inverseMatrix(int A[][10], int n);

int main() {
    int n;

    // Input the size of the matrix
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    // Check if n is within limits
    if (n <= 0 || n > 10) {
        printf("Please enter a positive size less than or equal to 10.\n");
        return 1;
    }

    int A[10][10];

    // Input the matrix
    printf("Enter the elements of the matrix:\n");
    inputMatrix(A, n);

    // Calculate and print the sum of matrix elements
    printf("Sum of all elements in the matrix: %d\n", sumMatrix(A, n));

    // Print the transposed matrix
    printf("Transposed matrix:\n");
    transposeMatrix(A, n);

    // Calculate and print the determinant of the matrix (optional)
    int det = determinant(A, n);
    if (det != 0) {
        printf("Determinant of the matrix: %d\n", det);
        // Calculate and print the inverse of the matrix (optional)
        printf("Inverse of the matrix:\n");
        inverseMatrix(A, n);
    } else {
        printf("Determinant of the matrix is zero. Inverse does not exist.\n");
    }

    return 0;
}

// Function to input the matrix
void inputMatrix(int A[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
}

// Function to print the matrix
void printMatrix(int A[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate the sum of matrix elements
int sumMatrix(int A[][10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += A[i][j];
        }
    }
    return sum;
}

// Function to print the transpose of the matrix
void transposeMatrix(int A[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
}

// Function to perform Gaussian elimination to get upper triangular matrix
void gaussianElimination(int A[][10], int n) {
    // To be implemented
}

// Function to calculate determinant of the matrix
int determinant(int A[][10], int n) {
    // To be implemented
    return 0;
}

// Function to calculate inverse of the matrix
void inverseMatrix(int A[][10], int n) {
    // To be implemented
}
