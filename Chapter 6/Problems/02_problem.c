#include<stdio.h>

int returning(int* pointer){
       printf("The value at the pointer is %d\n",pointer);
       printf("The value of the pointer is %d\n",*pointer);
      return 5;
    }
    
    int main(){


    int i = 6; 
    int* pointer = &i;
    printf("The address of i is %u\n",&i); // Get the address of i
    returning(pointer);
    return 0;
}