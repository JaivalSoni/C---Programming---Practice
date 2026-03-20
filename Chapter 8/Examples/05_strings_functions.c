#include<stdio.h>
#include<string.h>

    int main(){
    char st[]="Harry";
    printf("%d\n",strlen(st)); // Excluding the null ('\0') character.

    char source[] = "harry";
    char target[30];
    strcpy(target,st);
    printf("%s %s\n",target, source);
    
    char s1[12]="Code";
    char s2[] = "harry";
    
    printf("%s\n",strcat(s1,s2));
    // strcmp return 0 if both the strings are 0.
    int a = strcmp("far","joke"); // Negative result, the first word comes first ( f comes before j ) 
    int b = strcmp("joke","far"); // Positive result, the second word comes first ( j come before f )
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}