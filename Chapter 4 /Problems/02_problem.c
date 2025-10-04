#include<stdio.h>
    int main(){
    //Write a program to print multiplication table of 10 in reverse order.

    int n=10;
    int i;

    for ( i = 10; i;i--){
        printf(" %d * %d = %d\n",n, i, n * i);
    }

    return 0;
}