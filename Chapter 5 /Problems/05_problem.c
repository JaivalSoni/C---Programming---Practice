#include<stdio.h>
    int main(){
    int a = 4;
    printf("%d,%d,%d\n",a,++a,a++);
        // Answer can be 4,5,5 or 6,6,4 depending on the evaluation order of compiler
        // If left to right -> 4,5,5
        // If right to left -> 6,6,4
    return 0;
}