#include <stdio.h>
int main() {
    char* ptr = "harry"; // declaring string using pointer

    puts(ptr);          // prints: harry (+ newline)
    printf("%s", ptr);  // prints: harry

    return 0;
}