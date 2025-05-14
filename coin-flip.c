#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int probality = %50, head = 1, tails = 2;
    srand(time(NULL));

    printf("Enter the probality");
    scanf("%d", &probality);

    printf("Enter the head");
    scanf("%d", &head);

    printf("Enter the tails");
    scanf("%d", &tails);

}