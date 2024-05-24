#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char x;
    int len, j;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character at the end
    str[strcspn(str, "\n")] = '\0';

    // Input the character to delete
    printf("Enter the character to delete: ");
    scanf("%c", &x);

    // Get the length of the string
    len = strlen(str);

    // Delete all occurrences of the character 'x'
    j = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != x) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null terminate the modified string

    // Print the modified string
    printf("Modified string after deleting '%c': %s\n", x, str);

    return 0;
}
