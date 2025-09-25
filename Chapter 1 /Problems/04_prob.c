#include<stdio.h>
    int main(){
/*
Write a program to calculate simple interest for given values a set of values representing principal, no, of years and rate of interest. 
*/
    float principal;
    int time;
    float rate;
    float simple_interest;

    printf("Enter the principal amount => ");
    scanf("%f", &principal);
    printf("Enter the Time period in years => ");
    scanf("%d", &time);
    printf("Enter the rate of interest per annum => ");
    scanf("%f",&rate);

    printf("The simple interest is %f", (principal*time*rate)/100);
    return 0;
}