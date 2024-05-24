#include <stdio.h>

float f(float x) {
    return 2.5 * x;
}

float g(float x, float y) {
    return x * y;
}

int main() {
    float x, y;

    printf("Enter a value for x: ");
    scanf("%f", &x);
    printf("Enter a value for y: ");
    scanf("%f", &y);

    printf("f(x) = %.2f\n", f(x));
    printf("g(x, y) = %.2f\n", g(x, y));

    return 0;
}
