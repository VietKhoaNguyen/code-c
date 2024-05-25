#include <stdio.h>
#include <math.h>

// Cấu trúc lưu tọa độ một điểm
typedef struct {
    double x;
    double y;
} Point;

// Hàm tính khoảng cách giữa hai điểm
double distance(Point a, Point b) {
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

// Hàm kiểm tra tam giác vuông
int isRightTriangle(double a, double b, double c) {
    return (fabs(a * a + b * b - c * c) < 1e-9 || 
            fabs(a * a + c * c - b * b) < 1e-9 || 
            fabs(b * b + c * c - a * a) < 1e-9);
}

// Hàm kiểm tra tam giác đều
int isEquilateralTriangle(double a, double b, double c) {
    return (fabs(a - b) < 1e-9 && fabs(b - c) < 1e-9);
}

// Hàm kiểm tra tam giác cân
int isIsoscelesTriangle(double a, double b, double c) {
    return (fabs(a - b) < 1e-9 || fabs(b - c) < 1e-9 || fabs(a - c) < 1e-9);
}

// Hàm chính
int main() {
    Point A, B, C;
    printf("Nhập tọa độ điểm A (x y): ");
    scanf("%lf %lf", &A.x, &A.y);
    printf("Nhập tọa độ điểm B (x y): ");
    scanf("%lf %lf", &B.x, &B.y);
    printf("Nhập tọa độ điểm C (x y): ");
    scanf("%lf %lf", &C.x, &C.y);

    double AB = distance(A, B);
    double BC = distance(B, C);
    double CA = distance(C, A);

    // Kiểm tra điều kiện không tạo thành tam giác
    if (fabs(AB + BC - CA) < 1e-9 || fabs(AB + CA - BC) < 1e-9 || fabs(BC + CA - AB) < 1e-9) {
        printf("Ba điểm không tạo thành một tam giác.\n");
    } else {
        // Kiểm tra tam giác đều
        if (isEquilateralTriangle(AB, BC, CA)) {
            printf("Tam giác đều.\n");
        } 
        // Kiểm tra tam giác cân
        else if (isIsoscelesTriangle(AB, BC, CA)) {
            // Kiểm tra tam giác vuông cân
            if (isRightTriangle(AB, BC, CA)) {
                printf("Tam giác vuông cân.\n");
            } else {
                printf("Tam giác cân.\n");
            }
        } 
        // Kiểm tra tam giác vuông
        else if (isRightTriangle(AB, BC, CA)) {
            printf("Tam giác vuông.\n");
        } 
        // Trường hợp còn lại là tam giác thường
        else {
            printf("Tam giác thường.\n");
        }
    }

    return 0;
}
