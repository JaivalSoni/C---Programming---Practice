#include<stdio.h>
    int main(){
    // Write a program to check whether a number is divisible by 97 or not.
    int a = 12313;
    int num;
    printf("the value of a%%97 is %d\n",a%97);

    printf("Enter the number => ");
    scanf("%d",&num);
    if(num%97==0){
        printf("The number is divisible by 97");
    }
    else{
        printf("The number is not divisible by 97");
    }

    return 0;
}