#include<stdio.h>
    int main(){
    // Write a program to sum first ten natural numbers using while loop.
    
    int i = 1;
    int n = 0;

    while (i<=10){
        printf("Adding %d , Sum = %d\n",i,n += i);
        i++;
    }
            printf("The sum of first 10 natural numbers using while loop is %d\n",n);
    return 0;
}
