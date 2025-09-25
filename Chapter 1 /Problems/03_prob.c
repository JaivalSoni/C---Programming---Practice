#include<stdio.h>
    int main(){
/* Write a program to convert the celcius (Centigrade) degrees temperature to farenheit. */

    float celcuius;
    
    printf("Enter the Celcius (Centigrade) degrees => ");
    scanf("%f",&celcuius);

    printf("The value in Farenheit is %f ", celcuius*(9.0/5.0)+32);

    return 0;
}