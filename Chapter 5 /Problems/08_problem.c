#include<stdio.h>

void printStars(int stars){
    if(stars == 0) return;          // ✅ your base case
    printf("*");
    printStars(stars-1);            // no return, just call!
}

void printRow(int n, int current){
    if(current == n) return;        // ✅ your base case
    printStars(2*current+1);        // no return, just call!
    printf("\n");
    printRow(n, current+1);         // no return, just call!
}


int main(){
    int a;
    printf("Enter rows => ");
    scanf("%d", &a);
    printRow(a, 0);   // n = a, current always starts at 0!
    return 0;
}

