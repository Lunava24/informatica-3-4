#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rolls;
    srand(time(NULL));

    printf("How many rolls: "); scanf("%d", &rolls);
    for (; rolls > 0; -- rolls) {
        int diceRoll = (rand() % 6) + 1; // Generates a number between 1 and 6
        printf("You rolled a: %d\n", diceRoll); }
    return 0;
}