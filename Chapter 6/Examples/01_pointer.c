#include<stdio.h>
    int main(){
    int i = 72;  // integer, lives at some address
    int* j = &i; // j is pointer pointing to i
    int k = 69; // another integer
    
    printf("The address of i is %p\n",&i);  
    printf("The address of j where j is pointer pointing to i is %p\n",j);
    printf("The address of j is %p\n",&j);
    printf("The address of k is %p\n",&k);
    printf("The address of k is %p\n",*&(k));
    printf("The value at address j is %d\n",*j);

    return 0;
}

/*
Output :-
The address of i is 0x16f396ee8 -> 
The address of j where j is pointer pointing to i is 0x16f396ee8
The address of j is 0x16f396ee0
The address of k is 0x16f396edc
The address of k is 69
The value at address j is 72

Note :- ( * ) asks for value at particular address.
*/
