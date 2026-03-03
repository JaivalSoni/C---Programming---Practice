#include<stdio.h>
// Write a function to convert celcius temperature into farenheit.
float Temp(float celcius){
    return celcius*(9.0/5.0)+32;
}
    int main(){
    float a;
    printf("Enter the Celcius (Centigrade) degrees => ");
    scanf("%f",&a);
    printf("The value in farenheit is %f",Temp(a));
    return 0;
}

