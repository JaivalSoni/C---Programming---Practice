#include<stdio.h>
    int main(){
    int a = 1; int b = 1;
/*
Note :- You can take 0 as false and 1 as true in C language.
*/
    printf("The value of a&&b is %d\n",a&&b); // both are true so output is true(1)
    printf("The value of a||b is %d\n",a||b); // any one is true so output is true(1)
    printf("The value of !a is %d\n",!a); // a is true so output is false(0)
    printf("The value of !b is %d\n",!b); // b is true so output is false(0)

    int c = 0; int d = 1;

    printf("The value of c&&d is %d\n",c&&d); // any one is false so output is false(0)
    printf("The value of c||d is %d\n",c||d); // any one is true so output is true(1)
    printf("The value of !c is %d\n",!c); // c is false so output is true(1)
    printf("The value of !d is %d\n",!d); // d is true so output is false(0)

    int e = 1; int f= 0;
  
    printf("The value of e&&f is %d\n",e&&f); // any one is false so output is false(0)
    printf("The value of e||f is %d\n",e||f); // any one is true so output is true(1)
    printf("The value of !e is %d\n",!e); // e is true so output is false(0)
    printf("The value of !f is %d\n",!f); // f is false so output is true(1)

    int c = 0; int d = 1;
  
    printf("The value of c&&d is %d\n",c&&d); // any one is false so output is false(0)
    printf("The value of c||d is %d\n",c||d); // any one is true so output is true(1)
    printf("The value of !c is %d\n",!c); // c is false so output is true(1)
    printf("The value of !d is %d\n",!d); // d is true so output is false(0)

/*
AND (&&) operator :- If both the operands are true then the result is true otherwise it is false.
a. "1 and 1 " is evaluated to 1 [ True ]
b. "1 and 0 " is evaluated to 0 [ False ]
c. "0 and 1 " is evaluated to 0 [ False ]
d. "0 and 0 " is evaluated to 0 [ False ]

OR (||) operator :- If any one of the operand is true then the result is true otherwise it is false.
a. "1 or 1 " is evaluated to 1 [ True ]
b. "1 or 0 " is evaluated to 1 [ True ]
c. "0 or 1 " is evaluated to 1 [ True ]
d. "0 or 0 " is evaluated to 0 [ False ]

NOT (!) operator :- It is used to reverse the logical state of its operand. If a condition is true then NOT operator will make it false and vice-versa.
a. "not 1 " is evaluated to 0 [ False ]
b. "not 0 " is evaluated to 1 [ True ]

*/








    return 0;
}