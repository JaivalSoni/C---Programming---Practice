#include<stdio.h>
    int main(){
    // Write a program to calculate the factorial of a given number using a for loop.
    
    int i;
    int n;
    int factorial =1;

    printf("Enter the number to get the factorial =>");
    scanf("%d",&n);

for (i = 1; i<=n ; i++){
    
    factorial *= i;

    //printf("%d\n",i);

    
}
printf("The factorial is %d\n",factorial);

// Write a program to calculate the factorial of a given number using a for while loop.
    i = 1;
    factorial = 1;
    n=1;
    printf (" Enter the numbe to get the factorial of the number [ Using While Loop] \n");
    scanf("%d",&n);
    while (i<=n){
        factorial *= i;
        i++;
    }
    printf("\nThe factorial is %d",factorial);

    return 0;
}