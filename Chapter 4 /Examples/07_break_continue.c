#include<stdio.h>
    int main(){
        int i;
    for (i = 0; i < 15; i++ ){
            if (i==5){
                //break; // Exit the loop now !
                continue; // Exit or Skip this iteration now ! Means that now the 5th iteration will not print.
            }
        printf("The value of i is %d\n",i);
    }
    printf("For loop is now done");

    /*
    break terminates the loop.
    continue does terminates the loop, it skips or terminates the iteration.
    */
    return 0;
}