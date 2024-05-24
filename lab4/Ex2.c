#include <stdio.h>
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Both numbers must be positive integers.\n");
        return 1;
    }

    int result = gcd(num1, num2);

    printf("The greatest common divisor (gcd) of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
