#include<stdio.h>

// Write a program using recursion to calculate nth element of fibonacci series.
int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int a;
    printf("Enter the nth element => ");
    scanf("%d",&a);

    printf("Fibonacci series => ");
    for(int i = 1; i < a ; i++){
    printf(",%d",fibonacci(i));
    }
    printf(",%d",fibonacci(a));
    return 0;
}
