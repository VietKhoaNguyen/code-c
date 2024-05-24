#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    float x, y, denominator;

    printf("Enter a, b, and c 1st equation (ax + by = c): ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Enter d, e, and f 2nd equation (dx + ey = f): ");
    scanf("%f %f %f", &d, &e, &f);

    // Calculate the denominator
    denominator = a * e - b * d;

    if (denominator == 0) {
        printf("The equations have no unique solution.\n");
    } else {
        //Cramer's rule
        x = (c * e - b * f) / denominator;
        y = (a * f - c * d) / denominator;

        printf("The solution is: x = %.2f, y = %.2f\n", x, y);
    }

    return 0;
}
