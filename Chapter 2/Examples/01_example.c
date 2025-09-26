 #include<stdio.h>
    int main(){
    int i = 10; // Declare and initialize 'i' with 10
    int j = i; // Declare 'j' and assign it the value of 'i'
    int f, g, h, k; // Multiple variable declaration
    f = g = h = k = 30; // Multiple variable initialization
    int a = 2, b = 3, c = 4 , d = 5; // Multiple declaration and initialization in a single line
    
    // %d is a format specifier used for integers
    //%d is for int , %f is for float and %c is for char

    printf("The value of i is %d and value of j is %d\n", i, j);
    printf("The value of a is %d, b is %d\n", a,b);
    printf("The value of c is %d, d is %d", c,d);
 
    return 0;
 }