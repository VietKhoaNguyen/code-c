#include <stdio.h>

int fibonacciRecur(int n){
    if (n == 1){
        return 0;
    }
    else if (n == 2){
        return 1;
    }
    else{
        return fibonacciRecur(n-1) + fibonacciRecur(n-2);
    }
}

int main(){
    int n;
    scanf ("%d",&n);
    for (int i = 1; i<=n; i++){
        printf("%d ", fibonacciRecur(i));
    }
    return 0;
}