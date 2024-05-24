#include <stdio.h>

// Function prototype
void greet() {
    printf("Hello, world!\n");
}

int main() {
    // Declare a pointer to a function that takes no arguments and returns void
    void (*ptr)();

    // Point the pointer to the function
    ptr = greet;

    // Call the function using the pointer
    ptr();

    return 0;
}
