#include<stdio.h>
    int main(){
/* 
Calculate the area of a circle and modify te same program to calculate the Volume of a Cylinder given its radius and height
*/
    float pie = 3.14;
    int cirradius;
    int cylradius;
    int height;

    printf("Enter the radius of the circle => ");
    scanf("%d",&cirradius);
    printf("Enter the radius and height of the cylinder => ");
    scanf("%d,%d", &cylradius, &height);

    printf("\n The area of the circle is %f ", pie*cirradius*cirradius);
    printf("\n The volume of the cylinder is %f ", pie*cylradius*cylradius*height );
    return 0;
} 