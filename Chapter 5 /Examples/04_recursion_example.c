#include<stdio.h>
    
    int coundown(int n){
        if(n==0){
            return 0;
        }
        printf("%d\n",n);
        coundown(n-1);
    }

int main(){
    
    coundown(5);
    return 0;
}

To understand it properly i have mentioned steps how it work  --

  countdown(5) → prints 5 → calls countdown(4)
  countdown(4) → prints 4 → calls countdown(3)
    countdown(3) → prints 3 → calls countdown(2)
      countdown(2) → prints 2 → calls countdown(1)
        countdown(1) → prints 1 → calls countdown(0)
          countdown(0) → STOP! 🛑
