#include <stdio.h>

int main() {
    // Declare p as a pointer to int
    int *p1;

    // Declare p as a pointer to a pointer to int
    int **p2;

    // Declare p as an array of 10 pointers to int
    int *p3[10];

    // Printing the sizes of each type to verify
    printf("Size of p1 (pointer to int): %lu bytes\n", sizeof(p1));
    printf("Size of p2 (pointer to pointer to int): %lu bytes\n", sizeof(p2));
    printf("Size of p3 (array of 10 pointers to int): %lu bytes\n", sizeof(p3));

    return 0;
}
