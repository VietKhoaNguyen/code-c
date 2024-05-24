#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character at the end
    str[strcspn(str, "\n")] = '\0';

    // Print the number of occurrences of 'a' and their positions
    printf("Occurrences of 'a' in the string and their positions:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            printf("Character 'a' found at position %d\n", i);
            count++;
        }
    }

    // Print the total count of 'a' in the string
    printf("Total occurrences of 'a' in the string: %d\n", count);

    return 0;
}
