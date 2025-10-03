#include<stdio.h>
    int main(){
    int i = 5;
    printf("The value of i is %d",i);
    
    i = i + 5; // i = 5 , i = 5 + 5 -> i = 10
    printf("\nThe value of i is %d",i); // Value of i is 10 as it remains same no increment.
    
    i++;
    printf("\nThe value of i is %d",i); // Value of i increases by 1 but it prints i first and then increments. So the value that will be printed is 10 and incremented is 11

    ++i;
    printf("\nThe value of i is %d",i); // Value of i increases by 1. In [ ++i ] the value is increased first and then the i is printed.

    printf("\nThe value of i is %d", i++); // value gets increased by 1 but it first prints i then increments
    printf("\nThe value of i is %d", i); // now it prints incremented value of i
    
    // i++  =>  Value of i increases by 1 but it prints i first and then increments. So the value that will be printed is 10 and incremented is 11
    // ++i  => Value of i increases by 1. In [ ++i ] the value is increased first and then the i is printed.
    
    i += 2; // i = i+ 2
    printf("\nThe value of i is %d", i); // the value will be 15

    return 0;
}