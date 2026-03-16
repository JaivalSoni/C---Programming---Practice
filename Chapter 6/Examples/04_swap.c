#include<stdio.h>
    
int swap(int *a, int *b);


int swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int x = 4;
    int y = 3;
    swap(&x,&y);
    printf("Now the valye at x is %d and y is %d",x,y);
    return 0;
}