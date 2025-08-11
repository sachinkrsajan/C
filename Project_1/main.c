#include <stdio.h>
#include <stdlib.h> // For rand(), srand()
#include <time.h>   // For time()

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
        printf("Guess the no:\n");
        scanf("%d", &guessed);
        if (guessed>randomNumber){
            printf("Lower Number Please !\n");
        }
        else if(guessed<randomNumber){
            printf("Higher Number Please!\n");
        }
        
        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("You guessed the no in %d guesses", no_of_guesses);

    return 0;
}
