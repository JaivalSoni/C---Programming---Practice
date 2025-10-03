#include<stdio.h>
    int main(){
    //Write a program to print first ‘n’ natural numbers using for loop
    
    int i; int n;
    printf("Enter the number to print first 'n' natural numbers => ");
    scanf("%d",&n);
    for (i =1; i<=n;i++){
        printf("The natural numbers are => %d\n",i);
    }

    return 0;
}