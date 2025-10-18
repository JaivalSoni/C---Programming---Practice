#include<stdio.h>
    int main(){

    // Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

    int i = 1;
    int n = 0;
    
    // Using for loop
    for (i =1; i<=10 ; i++){
        printf("Adding %d , Sum = %d\n",i,n += i);
    }
    printf("\nThe sum of first 10 natural numbers using for loop is %d\n\n",n);
    // Using while loop, i changed the value of i and n as i is incremented to 11 so for loop exits but the while loop will not run as value of i is 11 and condition is i<=10.

    i = 1;
    n = 0;

    while (i<=10){
        printf("Adding %d , Sum = %d\n",i,n += i);
        i++;
    }
    printf("\nThe sum of first 10 natural numbers using while loop is %d\n\n",n);
    
    // Using do while loop, i will repeat the same procedure to reset the values of i and n
    i = 1;
    n = 0;
    
    do
    {
        n += i;
        printf("Adding %d , Sum = %d\n",i,n += i);
        i++;
    } while (i<=10);
    printf("\nThe sum of first 10 natural numbers using do while loop is %d\n",n);
    


    return 0;
}
