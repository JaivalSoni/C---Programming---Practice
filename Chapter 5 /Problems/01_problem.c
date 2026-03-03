#include<stdio.h>
// Write a program using function to find average of three numbers.

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}

int main(){
    int a,b,c;
    printf("Enter the 1st number => ");
    scanf("%d",&a);
    printf("Enter the 2nd number => ");
    scanf("%d",&b);
    printf("Enter the 3rd number => ");
    scanf("%d",&c);
    
    
    printf("Here is the average of the numbers you gave => %f",average(a,b,c));

    return 0;
}