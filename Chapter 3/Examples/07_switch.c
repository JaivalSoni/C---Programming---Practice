#include<stdio.h>
    int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);

    switch(a){

        case 1: // case is used to specify different cases
        printf("You entered 1 \n"); // block of code to be executed if case is matched
        break;   // break is used to exit from switch case otherwise all the cases after the matched case will be executed.
        case 2:
        printf("You entered 2 \n");
        break;
        case 3:
        printf("You entered 3 \n");
        break;
        case 4:
        printf("You entered 4 \n");
        break;
        default:
        printf("You entered a number other than 1,2,3,4 \n");
    }

    /*
    Some Important Notes:
    • We can use switch-case statements even by writing cases in any order of our choice (not necessarily ascending).
    • char values are allowed as they can be easily evaluated to an integer.
    • A switch can occur within another but in practice this is rarely done
    */

    return 0;
}