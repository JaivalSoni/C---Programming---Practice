#include<stdio.h>
// Write a recursive function to calculate the sum of first 'n' natural numbers.    

int sum(int n){
    if (n==1){
        return 1;
    }
    return sum(n-1) + n;
}
int main(){
    int a;
    printf("Enter the nth number => ");
    scanf("%d",&a);
    printf("%d",sum(a));

    return 0;
}