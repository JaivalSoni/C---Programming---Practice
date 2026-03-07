#include<stdio.h>
    int main(){
    int i = 72;
    int* j = &i; // j is pointer pointing to i
    int k = 69;
    printf("The address of i is %p\n",&i);
    printf("The address of j where j is pointer pointing to i is %p\n",j);
    printf("The address of j is %p\n",&j);
    printf("The address of k is %p\n",&k);

    printf("The value at address j is %d\n",*j);

    return 0;
}