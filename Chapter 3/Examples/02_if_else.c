#include<stdio.h>
    int main(){
    int age = 25;

    if (age >10){
        printf("You are above 10 years ");
    }
    else{
        printf("You are not above 10 years ");
    }

    if (age%5==0){
        printf("\nYou are divisible by 5");
    }
    else{
        printf("\nYou are not divisible by 5");
    }

    return 0;
}