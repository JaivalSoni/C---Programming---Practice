#include<stdio.h>
    int main(){

    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");

        /*
        In the above code, we have used assignment operator instead of comparison operator.
        So, the value of a becomes 11 and hence the if condition becomes true.
        Therefore, the output of the code will be "I am 11".       
        */
    return 0;
}