#include<stdio.h>
    int main(){
    int age = 49;

    if(age >60){
       printf("You can drive and you are a senior citizen\n");
    }
    else if (age >40 ){
        printf("You can drive and you are elder\n");
    }
    else if(age>18){
        printf("You can drive\n");
    }
    else{
        printf("You cannot drive\n");
    }

    /*
    Important Points to remember :-
    1. In else if ladder only one block will be executed.
    2. Using if-else if-else reduces indents.
    3. The else part is optional.
    4. Also there can be multiple else if parts.
    5. Last else will be executed when all the above conditions are false.  
    */
    return 0;
}