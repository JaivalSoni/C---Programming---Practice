#include<stdio.h>
    int main(){
    int a = 5;
    int b = 10;
    int c = a + b;
    printf("The sum of  a and b is %d\n",c);

    printf("The remainder when a is divided by b is %d", a%b);

    /*
    Note :-
    int b = 2;
    int a = 5;
    int z; z= b*c; // legal
    int z; b*c = z; // illegal
    1. You cannot assign a value to an expression.
    2. The left side of an assignment must be a variable.

    Modulus :-
    % -> Modulus operator gives the remainder when one integer is divided by another.
    % -> cannot be used with float values.
    % -> sign is same as of numberator (-5%2 = -1 and 5%-2 = 1) 
    */

    /*
    No operators are assumed to be present between two variables.
    int i = ab; // illegal
    int i = a b; // illegal
    int i = a*b; // legal 
    */

    /*
    This does not work for exponentiation in c
    int a = a^b; // illegal

    There is no operator for exponentiation in C. We have to use the pow function from math.h library.
    */
    return 0;
}