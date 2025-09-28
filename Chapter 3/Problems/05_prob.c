#include<stdio.h>
    int main(){
    /*
    Write a program to determine whether a character entered by the user is 
    lowercase or not
    */
   char character;
    printf("Enter the character => ");
    scanf("%c",&character);

    printf("The character is %c",character);
    printf("\nThe value of character %c is %d",character,character);

    if (character >= 97 && character <= 122){
        printf("\nThe character is lowercase");
    }
    else {
        printf("\nThe character is not lowercase.");
    }

    /*
    Ascii values from 97 to 122 are lowercase a to z, and 65 to 90 are uppercase A to Z.
    For other ascii value you can check it out from [ https://www.geeksforgeeks.org/dsa/ascii-table/ ].
    */
    return 0;
}