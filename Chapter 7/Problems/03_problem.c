#include<stdio.h>
    int main(){
    int arr[10];
    int* ptr = arr;
    int n;
    
    printf("Enter the number of which you want the Multiplication table of => ");
    scanf("%d",&n);
    
    for(int i = 0; i < 10; i++){
        arr[i] = n * (i + 1);
    }
    for(int i = 0; i < 10; i++ ){
        printf("The value of %d x %d = %d\n",n,(i+1),arr[i]);
    }
    printf("\n----- Using Pointer Arithmetic -----\n\n");

    for(int i = 0; i < 10; i++ ){
        printf("The value of %d x %d = %d at address %p\n",n,(i+1),*ptr,ptr);
        ptr++;
    }
    printf("");

    return 0;
}