#include<stdio.h>
    int main(){
    //Write a program to print first ‘n’ natural number using do-while loop
    int i=1;
    int n;
    printf("Enter n => ");
    scanf("%d",&n);
    do
    {
        printf("\nThe first n natural number => %d",i);
        i++;
    } while (i<=n);
    return 0;
}