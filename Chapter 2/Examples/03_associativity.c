#include<stdio.h>
    int main(){
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value is %d" ,a*b/c);
    printf("The value is %d" ,3*b/2*c + 7*a);

    /*
    printf("The value is %d" ,3*b/2*c + 7*a);
    3*b/2*c + 7*a
    3*b/2*c + 21
    18/2*c +21
    9*c + 21
    81 + 21
    102   
    */





    /*
    Operators Precedence and Associativity
    1 -> * / %
    2 -> + -
    3 -> =  
    */
   // When operators have same precedence then associativity is considered.
   // Associativity of + - * / % is left to right
   // Associativity of = is right to left
    printf("");

    return 0;
}