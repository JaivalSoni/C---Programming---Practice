#include<stdio.h>

    int ten_times(int a){ // Copy is passed so it doesn't changes lol, its a call by value so it doesn't change but if its call by reference as i did in 3rd problem then the value changes as we provide the address where it changes the value.
        a = a * 10; 
    }

    int main(){
    int x;
    printf("Enter the number => ");
    scanf("%d",&x);
    ten_times(x);
    printf("The 30 times of number you gave is %d\n",x);
    return 0;
    }
