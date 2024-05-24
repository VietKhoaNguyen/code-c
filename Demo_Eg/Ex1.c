#include <stdio.h>

// Sum of all diviors count from n to m
int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, m;
    printf("n: ");
    scanf("%d", &n);
    printf("m: ");
    scanf("%d", &m);

    int totalDivisors = 0;
    for (int i = n; i <= m; ++i) {
        totalDivisors += countDivisors(i);
    }

    printf("sum of diviors %d to %d is: %d\n", n, m, totalDivisors);

    return 0;
}
