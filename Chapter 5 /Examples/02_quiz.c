#include<stdio.h>

int change(int a){
    a = 77;
    printf("This is the change %d\n",a);
}

int main(){
    int b = 22;
    change(b);
    printf("This is the value of b => %d",b);
    return 0;
}