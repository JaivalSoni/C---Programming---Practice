#include<stdio.h>
    int main(){
    int n1,n2,n3;
    printf("Enter the n1, n2 and n3 => ");
    scanf("%d %d %d", &n1, &n2, &n3);
        
    int arr[3][10];
    int mul[]={n1,n2,n3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j+1);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n",mul[i],(j+1),arr[i][j]);
        }
        
    }
    
      

    return 0;
}