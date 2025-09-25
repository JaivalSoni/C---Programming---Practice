#include<stdio.h>
    int main(){
    /*
    Write a program to calculate the area of a rectangle using 
    a) Using hard coded inputes
    b) using inputs supplied by users
    */
   int length;
   int breadth;

    printf("Enter the length => ");
    scanf("%d",&length);
    printf("Enter the breadth => ");
    scanf("%d",&breadth);
    
    printf("The area of rectangle is %d => ", length * breadth);
    return 0;
}