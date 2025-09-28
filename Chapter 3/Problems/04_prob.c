#include<stdio.h>
    int main(){
/*  Write a program to find whether a year entered by the user is a leap year or not. 
    Take year as an input from the user.
*/
    int year;
    printf("Enter the year => ");
    scanf("%d",&year);

    if (year % 4 == 0 || year % 100 != 0 || year % 400 == 0){
        printf (" The %d is a leap year.",year);
    }
    else {
        printf(" The %d is not a leap year.",year);
    }

    return 0;
}