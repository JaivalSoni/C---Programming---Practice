#include<stdio.h>
    int main(){
    // char st[] = {'a','b','c','\0'};
    char st[] = "abc"; // Same as doing  char st[] = {'a','b','c','\0'}; and in double quote the null character is automatically placed.
    // for(int i = 0; i < 3; i++){
    //     printf("%c",st[i]);
    // }
    printf("%s",st);
    return 0;
}