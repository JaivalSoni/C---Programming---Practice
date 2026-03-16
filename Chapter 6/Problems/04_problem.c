#include<stdio.h>

int sum(int *, int *);

int sum(int *a, int *b){
    *a = 7;
    return *a + *b;
}

int main(){
    int x = 5,y = 5;
    printf("Enter the sum of x and y is %d",sum(&x,&y));

    return 0;
}
