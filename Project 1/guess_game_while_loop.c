#include <stdio.h>
#include <stdlib.h>   // for rand() and srand()
#include <time.h>     // for time()

int main() {
    int random_number;

    // Initialize random seed using current time
    srand(time(0));

    // Generate random number between 1 and 100
    random_number = (rand() % 100) + 1;

    int no_of_guesses =0;
    int guessed;
    int n;

    
    // for(no_of_guesses=0; guessed != random_number;no_of_guesses++){
    //     printf("\nGuess the number => ");
    //     scanf("%d",&guessed);
    //     if (guessed>random_number){
    //         printf("\nLower number please");
    //     }
    //     else if (guessed<random_number){
    //         printf("\nHigher number please");
    //     }
    // }
    printf("You guessed the number %d, in %d guesses.",random_number,no_of_guesses);
    return 0;
}