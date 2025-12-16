#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numofrolls;
    int i;
    int diceRoll;
    char playAgain;

    srand(time(NULL));

    do {
        printf("\n--- DICE ROLLER ---\n");
        
        printf("How many times do you want to roll the dice? ");
        scanf("%d", &numofrolls);

        printf("\nRolling the dice %d times...\n", numofrolls);
        printf("-----------------------------\n");

        for (i = 1; i <= numofrolls; i++) {
            diceRoll = (rand() % 6) + 1;
            printf("Roll #%d: %d\n", i, diceRoll);
        }

        printf("-----------------------------\n");

        printf("Do you want to roll again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Goodbye!\n");
    return 0;
}