#include<stdio.h>
    int main(){
    // Get the address and value of a variable

    int i = 6; 
    int* pointer = &i;
    printf("The address of i is %p\n",&i); // Get the address of i
    printf("The value of i is %d\n",*pointer); // Get the value of i

    return 0;
}