#include <stdio.h>
#include <stdlib.h>   // for rand() and srand()
#include <time.h>     // for time()

int main() {
    int random_number;

    // Initialize random seed using current time
    srand(time(0));

    // Generate random number between 1 and 100
    random_number = (rand() % 100) + 1;

    int no_of_guesses = 0;
    int guessed;
    int i;

    
    do
    {
        printf("\nGuess the number ");
        scanf("%d",&guessed);
        if(guessed>random_number){
            printf("Lower number please.");
        }
        else if (guessed < random_number){
            printf("Higher number please.");
        }
        no_of_guesses++;
    } while (guessed!=random_number);
    
    printf("You guessed the number in %d guesses",no_of_guesses);

    if (no_of_guesses >= 20){
        printf("\nYou guessed number 20 times or more than 20, your score %d", 100/4);
    }
    else if (no_of_guesses >= 15){
        printf("\nYou guessed number 15 times or more than 15, your score %d", 100/4);
    }
    else if (no_of_guesses >=10){
        printf("\nYou guessed number 10 times or more than 10, your score %d", 100/2);
    }
    else if (no_of_guesses >=5){
        printf("\nYou guessed number 5 times or more than 5, your score %d", 100/1);
    }
    else if (no_of_guesses <= 5){
        printf("\nYou guessed number 5 times or more than 5, your score %d", 100);
    }
    return 0;
}
