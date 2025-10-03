#include<stdio.h>
    int main(){
    int i=0;
    while (i<=10){
        printf("Happy Birthday\n");
        i++; // i++ or i = i + 1,  Note :- If we don't use the increment, the loop will run infinitely and i remains 0 and the condition never becomes false.
    }
    return 0;
}