#include<stdio.h>

    // Function Prototype
    int sum(int , int);

    //Function Definition
     int sum(int a, int b){
        int add;
        add = a + b;
       // printf("The sum is %d\n",add);
        return add;
     }

    int main(){
     int a = 10;
     int b = 20;
     
     int c = sum(a,b); // Function call
     printf("The sum is %d\n",c);


     int a1 = 30;
     int b1 = 30;

     int c1 = sum(a1,b1); // Function call
     printf("The sum is %d",c1);
    //  sum(a1,b1); // Function call
    return 0;
}