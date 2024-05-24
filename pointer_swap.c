#include<stdio.h>
void swap(int *n1,int *n2){
    int temp = *n2;
    *n2 = *n1;
    *n1 = temp;
}
int main(){
    int a,b;
    printf("enter:",a,b);
    scanf("%d %d",&a,&b);
    printf("before swap: a=%d b=%d",a,b);
    swap(&a,&b);
    printf("after: a=%d b=%d",a,b);
    return 0;
}