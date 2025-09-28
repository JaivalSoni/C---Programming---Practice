#include<stdio.h>
    int main(){
    /*
    Calculate income tax paid by an employee to the government as per the slabs 
    mentioned below:

    Income Slab Tax 
    2.5 – 5.0L    5%
    5.0L - 10.0L  20%
    Above 10.0L   30%

    Note that there is no tax below 2.5L. Take income amount as an input from the user
    */
    int income;
    float tax = 0;
    printf("Please enter the income amount => ");
    scanf("%d",&income);

    if (income <= 250000){
        printf("There is no tax applied to 2.5L or below 2.5L\n");
    }
    else if (income > 250000 && income < 500000){
        tax = 0.05 * (income - 250000);
    }
    else if ( income > 500000 && income < 1000000){
        tax = 0.05 * (500000 - 250000)+ 0.2 * ( income - 500000);
    }
    else  {
        tax = 0.05 * ( 500000 - 250000 ) + 0.2 * ( 100000 - 500000 ) + 0.3 * (income - 1000000);
    }
    printf(" The total tax you need to pay is %.2f", tax); // Adding 2 in %f => %.2f gives only 2 numbers after decimal . Same for %.3f it gives only 3 no. after decimal, you can control the accuracy.

    return 0;
}