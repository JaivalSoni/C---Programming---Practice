#include<stdio.h>
    int main(){
    
    int i;
    int n;
    int not_prime = 0;

    // Write a program to check whether a given number is prime or not using loops. [ Using do while loop ]
    printf("Enter the number to check whether it is prime number or no =>");
    scanf("%d",&n);

    // for (i = 2; i < n; i++){
    //     if (n%i == 0 && n != 2){
    //         not_prime = 1;
    //     }
    // }
    // if (not_prime){
    //     printf("This is not a prime number ");
    // }
    // else {
    //     printf("This is a prime number");
    // }

    // while (i<n){
    //     if (n%i == 0 && n!=2){
    //         not_prime = 1;
    //     }
    // }
    // if (not_prime){
    //     printf("This is not a prime number.");
    // }
    // else {
    //     printf("This is a prime number");
    // }

    i=2;
    do
    {
        if(n%i == 0 && n!=2){
            not_prime = 1;
            break;
        }
        i++;
    } while (i<n);
    if (not_prime){
        printf("This is not a prime number.");
    }
    else {
        printf("This is a prime number.");
    }

    return 0;
}