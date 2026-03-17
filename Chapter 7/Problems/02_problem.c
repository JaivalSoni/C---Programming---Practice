#include<stdio.h>
    int main(){
    int arr[10];
    int* ptr = arr;

    for(int i = 0; i < 10; i++){
        arr[i] = 5 * (i + 1);
    }
    for(int i = 0; i < 10; i++ ){
        printf("The value of 5 x %d = %d\n",(i+1),arr[i]);
    }
    printf("\n----- Using Pointer Arithmetic -----\n\n");

    for(int i = 0; i < 10; i++ ){
        printf("The value of 5 x %d = %d at address %p\n",(i+1),*ptr,ptr);
        ptr++;
    }
    printf("");

    return 0;
}