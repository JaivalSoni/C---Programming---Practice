#include<stdio.h>
    int main(){
    int marks[] = {19, 34, 53, 69, 77};

    int* ptr = &marks[0];
    // int* ptr = marks;  Same as int* ptr = &marks[0];
    for(int i = 0; i < 4; i++){
        printf("The marks at index %d is %d at address %p\n",i,marks[i],&marks[i]);
    }
    printf("\n----------------------------\n\n");
    for(int i = 0; i < 5; i++){
        printf("The marks at index %d is %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}