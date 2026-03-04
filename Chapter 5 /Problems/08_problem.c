#include<stdio.h>

void printStars(int stars){
    if(stars == 0) return;          
    printf("*");
    printStars(stars-1);            
}

void printRow(int n, int current){
    if(current == n) return;        
    printStars(2*current+1);        
    printf("\n");
    printRow(n, current+1);         
}


int main(){
    int a;
    printf("Enter rows => ");
    scanf("%d", &a);
    printRow(a, 0);   
    return 0;
}

