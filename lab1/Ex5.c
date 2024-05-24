#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c;
    printf("enter number:",a,b,c);
    scanf("%f %f %f",&a,&b,&c);
    
    double x;
    printf("Enter the number x:",x);
    scanf("%f",&x);
    double result = a*x*x + b*x + c;
    printf("Ans: %.2lf",result);
    return 0;
}