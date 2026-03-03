#include<stdio.h>
// Write a function to calculate force of attraction on a body of mass m exerted by earth (g = 9.8 m/s^2)    
float force(int m){
    return m * 9.8;
}

int main(){
    int b;
    printf("Enter the value of mass => ");
    scanf("%d",&b);
    printf("The force of attraction on a body of mass m exerted by earth is %f N",force(b));

    return 0;
}