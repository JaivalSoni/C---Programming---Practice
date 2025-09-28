#include<stdio.h>
    int main(){
    /*
    Write a program to determine whether a student has passed or failed. To pass, a 
    student requires a total of 40% and at least 33% in each subject. Assume there 
    are three subjects and take the marks as input from the user.
    */
   
    int marks1,marks2,marks3;
    printf("Enter the marks1 of student => ");
    scanf("%d",&marks1);
    printf("Enter the marks2 of student => ");
    scanf("%d",&marks2);
    printf("Enter the marks3 of student => ");
    scanf("%d",&marks3);
    printf("The marks are %d, %d, %d \n",marks1,marks2,marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33){
        printf("The student is fail as he has less than 33 in one of the subjects");
    }
    else if ((marks1 + marks2 + marks3)/3<40){
        printf("The student is fail due to less percentage.");
    }
    else {
        printf("You are passed/");
    }
    return 0;
}