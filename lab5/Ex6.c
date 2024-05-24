#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character at the end
    str[strcspn(str, "\n")] = '\0';

    // Print the string in reverse
    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
