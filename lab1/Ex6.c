#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c;
    printf("nums",a,b,c);
    scanf("%lf %lf %lf",&a, &b, &c);
    double equation = 3*a - pow(b,3) - 2*sqrt(c);
    printf("Ans: %lf", equation);
    return 0;
}