#include<stdio.h>
    int main(){
    float a = 9.0;
    int b = 2;
    float c = a / b;
    int d = 6.7;

    printf("The value of a / b is %f\n",c);
    printf("The value of d is %d\n",d);
    

/*
Note :-
In programming type compatibility is very crucial. For int  a = 3.5; the float value 3.5 is converted to int value 3 and then assigned to a. This is called type casting.
*/

    /*
    int and int -> int 
    int and float -> float
    float and float -> float
    */
    return 0;
}