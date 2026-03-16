#include<stdio.h>
    int main(){
    int i = 72;
    int* j = &i; // j is a integer pointer pointing to i which means j is storing the address of i.
    int k = 69;

    char x = 'A';
    char* n = &x; // Here n is character pointer pointing to x.

    float m = 6.99;
    float* s = &m; // Here s is float pointer pointing to m.

    printf("The address of i is %p\n",&i);
    printf("The address of j where j is pointer pointing to i is %p\n",j);
    printf("The address of j is %p\n",&j);
    printf("The address of k is %p\n",&k);
    printf("The address of k is %d\n",*(&k));
    printf("The value at address j is %d\n",*j);
    printf("The address of j is %p\n",*&(j));
    
    printf("The address of n  is %p\n",*&(n)); // Character pointer
    printf("The value at address n is %c\n",*n);
    
    printf("The address of s is %p\n",*&(s)); // Float pointer
    printf("The value at address s is %f\n",*s);

    return 0;
}
