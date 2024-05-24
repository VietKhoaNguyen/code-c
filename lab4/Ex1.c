#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("Both numbers must be positive integers.\n");
        return 1;
    }

    int a = num1;
    int b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("The GCD of %d and %d is %d.\n", num1, num2, a);

    return 0;
}
