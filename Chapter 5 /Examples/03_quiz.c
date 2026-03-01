#include<stdio.h>
#include<math.h>

int factorial(int n){
    if(n==1 || n==0{
        return 1;
    }
    // printf("The factorial is %d\n",n);
    return factorial(n-1) * n;
}

int main(){
    int a = 5;
    int nb;
    printf("Enter the number to get the factorial => ");
    scanf("%d",&nb);
    
    printf("The factorial is %d\n",factorial(nb));
    printf("The area of this square is %f\n",pow(a,2));

    return 0;
}
