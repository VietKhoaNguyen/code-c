#include <stdio.h>
int main() {
    int X, Y, Z;
    int a, b, c;
    int count = 0;
    int a_values[10000];
    scanf("%d %d %d", &X, &Y, &Z);
    for (b = 1; b <= 10000; ++b) {
        for (c = 1; c <= 10000; ++c) {
            a = b * c;
            if (X * c - Y * b - X * Y == 0 && b - c * Z - Z >= 0) {
                a_values[count] = a; 
                count++;
                break;
            }
        }
    }
    int min_a = a_values[0];
    printf("%d\n", min_a);
    return 0;
}