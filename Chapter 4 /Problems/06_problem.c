#include<stdio.h>
    int main(){
    // Write a program to calculate the factorial of a given number using a for loop.
    
    int i;
    int n;
    int product =1;

    printf("Enter the number to get the factorial =>");
    scanf("%d",&n);

for (i = 1; i<=n ; i++){
    
    product *= i;

    //printf("%d\n",i);

    
}
printf("The factorial is %d\n",product);

// Write a program to calculate the factorial of a given number using a for while loop.
    i = 1;
    product = 1;
    n=1;
    printf (" Enter the number to get the factorial of the number [ Using While Loop] \n");
    scanf("%d",&n);
    while (i<=n){
        product *= i;
        i++;
    }
    printf("\nThe factorial is %d",product);

    return 0;
}
