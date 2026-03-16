#include<stdio.h>

    int ten_times(int* a){
        *a = *a * 10;
    }

    int main(){
    int x;
    printf("Enter the number => ");
    scanf("%d",&x);
    ten_times(&x);
    printf("The 30 times of number you gave is %d\n",x);
    return 0;
}