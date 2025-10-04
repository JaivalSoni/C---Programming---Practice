#include<stdio.h>
    int main(){
    
    // Write a program to check whether a given number is prime or not using loops. [ Using while loop].
    
    int i;
    int n;
    int not_prime = 0;
    printf("Enter the number to check whether it is prime or not => ");
    scanf("%d",&n);
    
    i=2;
    while(i<n){
        if ( n%i==0 && n!=2){
            not_prime=1;
            break;
        }
        i++;
    }

    // for ( i = 2; i<n; i++){
    //     if (n%i == 0 && n!=2){
    //         not_prime = 1;
    //         break; 
    //     }
//}

    if (not_prime){
        printf("\nThis is not a prime number");
    }
    else {
        printf("\nThis is a prime number");
    }

    return 0;
}