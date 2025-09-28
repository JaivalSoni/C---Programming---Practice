#include<stdio.h>
    int main(){
    /*
    Write a program to find greatest of four numbers entered by the user.    
    */
    
    int a,b,c,d;

    printf("Enter the 4 numbers => ");
    scanf("%d %d %d %d",&a, &b, &c, &d);
    
    if ( a >b && a >c && a > d){
        printf(" The greatest number is %d",a);
    }
    else if ( b > a && b >c && b > d){
        printf(" The greatest number is %d",b);
    }
    else if ( c > a && c > b && c > d){
        printf (" The greatest number is %d",c);
    }
    else {
        printf(" The greatest number is %d",d);
    }

    return 0;
}