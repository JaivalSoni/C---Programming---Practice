#include<stdio.h>
    int main(){
    int i =0;
    int skip = 5;
    int terminate = 10;
    
    // A short program to revise the continue and break statements in loop.
    
    for (i=0; i<30; i++){
        if (i==5){
            printf("[ - ] i = 5, is skipped\n");
            continue;
        }
        else if( i==10){
            printf("[ ! ] Exiting the loop as i ==10\n ");
            break;
        }
        printf("The value of i is %d\n",i);
    }

    return 0;
}