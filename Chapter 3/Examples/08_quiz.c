#include<stdio.h>
    int main(){
    int marks;
    printf("Enter the marks student achieved => ");
    scanf("%d",&marks);

    if (marks <= 100 && marks >=90){
        printf("Marks => %d, Grade => A",marks);
    }
    else if(marks <= 90 && marks >=80 ){
        printf("Marks => %d, Grade => B",marks);
    }
    else if(marks <= 80 && marks >=70 ){
        printf("Marks => %d, Grade => C",marks);
    }
    else if(marks <= 70 && marks >=60 ){
        printf("Marks => %d, Grade => D",marks);
    }
    else if(marks <= 60 && marks >=50 ){
        printf("Marks => %d, Grade => E",marks);
    }
    else if(marks <= 50 ){
        printf("Marks => %d, Grade => F",marks);
    }
    return 0;
}