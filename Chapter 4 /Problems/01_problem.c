#include<stdio.h>
    int main(){
    //Write a program to print multiplication table of a given number n.
    int n;
    int i;

    printf("Enter the number n to print the multiplication table => ");
    scanf("%d",&n);
    for ( i = 1; i <= 10;i++){
        printf(" %d * %d = %d\n",n, i, n * i);
    }

    return 0;
}