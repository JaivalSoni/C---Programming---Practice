#include<stdio.h>

void printArray(int* i, int n){
    printf("Inside function using i[j]:\n");
    for(int j = 0; j < n; j++){
        printf("i[%d] = %d\n", j, i[j]);
    }

    printf("\nInside function using *(i+j):\n");
    for(int j = 0; j < n; j++){
        printf("*(i+%d) = %d\n", j, *(i+j));
    }
}

void printArray2(int i[], int n){ // int i[] is just a pointer, same as int* i
    printf("\nInside function using int i[] syntax:\n");
    for(int j = 0; j < n; j++){
        printf("i[%d] = %d\n", j, i[j]);
    }
}

int main(){
    int marks[] = {19, 34, 53, 69};
    int n = 4;

    printf("Printing from main directly:\n");
    for(int i = 0; i < n; i++){
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    printf("\n--- Now passing to function (int* i syntax) ---\n");
    printArray(marks, n);

    printf("\n--- Now passing to function (int i[] syntax) ---\n");
    printArray2(marks, n);

    return 0;
}