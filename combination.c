#include <stdio.h>

// Hàm tính giai thừa (factorial) của một số nguyên dương
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

// Hàm tính tổ hợp C(n, k)
unsigned long long combination(int n, int k) {
    if (k > n) 
        return 0; // Nếu k > n, tổ hợp không xác định
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Hàm chính
int main() {
    int n, k;
    printf("Nhập n và k: ");
    scanf("%d %d", &n, &k);

    if (n < 0 || k < 0) {
        printf("n và k phải là các số nguyên không âm.\n");
    } else {
        unsigned long long result = combination(n, k);
        printf("C(%d, %d) = %llu\n", n, k, result);
    }

    return 0;
}
