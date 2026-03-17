#include<stdio.h>

int main(){
    int arr[3][2] = {{1, 4}, {7, 9}, {11, 22}};

    // printing each element manually
    printf("Manual printing:\n");
    printf("%d\n", arr[0][0]);  // row 0, col 0 = 1
    printf("%d\n", arr[0][1]);  // row 0, col 1 = 4
    printf("%d\n", arr[1][0]);  // row 1, col 0 = 7
    printf("%d\n", arr[1][1]);  // row 1, col 1 = 9
    printf("%d\n", arr[2][0]);  // row 2, col 0 = 11
    printf("%d\n", arr[2][1]);  // row 2, col 1 = 22

    printf("\n--- Now using the Loop ( Here using nested loop ) ---\n\n");
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("row[%d],col[%d] = %d\n",i,j,arr[i][j]);
        }
    }
    return 0;
}