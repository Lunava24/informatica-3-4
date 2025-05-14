#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int flip;

    printf("Enter the head");
    scanf("Enter the head");

    printf("Enter the tails");
    scanf("Enter the tails");

    srand(time(NULL));

     printf("guess the flip: "); scanf("%d", &flip);
    for (; flip > 0; -- flip) {
        int diceRoll = (rand() % 2) + 1; // Guess between head or tails
        printf("You rolled a: %d\n", diceRoll); }

    return 0;

}