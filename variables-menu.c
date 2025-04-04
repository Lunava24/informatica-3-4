#include <stdio.h>

int main(){
    char snack1[] = "Takis";
    float price1 = 14.24;
    int stock1 = 17;

    char snack2[] = "Chips";
    float price2 = 17.50;
    int stock2 = 20;

    char snack3[] = "Choco roles ";
    float price3 = 16.36;
    int stock3 = 2;

    printf("Welcome to the Snack Shop\n");
    printf("---------------------------\n");
    printf("1. %s - $%.2f - %d\n" , snack1, price1, stock1);
    printf("2. %s - $%.2f - %d\n" , snack2, price2, stock2);
    printf("3. %s - $%.2f - %d\n" , snack3, price3, stock3);
}