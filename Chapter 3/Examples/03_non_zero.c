#include<stdio.h>
    int main(){
        if(1){ // 1 is non zero value so it is true
            printf("This is true\n");
        }
        if(2344){ // non zero value so it is true
            printf("This is also true\n");
        }
        if(2.3){ // non zero value so it is true
            printf("This is also true\n");
        }
        if('c'){ // ASCII value of 'c' is 99 which is non zero value so it is true
            printf("This is also true\n");
        }
        if(0){ // 0 is zero value so it is false and is not executed.
            printf("This is false\n");
        }


    return 0;
}