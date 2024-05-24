#include<stdio.h>
int main(){
    int a,b,sum;
    int *n1, *n2;
    n1 = &a;
    n2 = &b;
    printf("enter:",n1,n2);
    scanf("%d %d",n1,n2);
    sum = *n1 + *n2;
    printf("%d",sum);
    return 0;
}