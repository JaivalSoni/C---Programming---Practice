#include<stdio.h>
    int main(){
    // Pointer Arithmetic using Integer Pointer
    int a = 5;
    int* ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++;
    printf("The address of a is %u\n",ptr);

    char b = 'A';
    char* ptr2 = &b;
    printf("The address of b is %u\n",&b);
    printf("The address of b is %u\n",ptr2);
    ptr2++;
    printf("The address of b is %u\n",ptr2);

    return 0;
}