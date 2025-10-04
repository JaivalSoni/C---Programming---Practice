#include<stdio.h>
    int main(){
    
    // Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10).

    int i;
    int n = 8;

    for (i = 1; i<=10; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }

    i = 1;
    n = 8;
    int sum = 0;

    for (i = 1;i<=10;i++){
        sum += (n*i);
        printf("\nAdding %d, Sum = %d",n*i,sum);
    }
    printf("\nSum of the numbers occurring in the multiplication table of 8%d\n",sum);

    return 0;
}