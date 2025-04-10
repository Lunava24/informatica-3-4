#include <stdio.h>

int main(){
    //Exercise 1
    int num1;
    int num2;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1 == num2) {
        printf("%d is equal to %d \n", num1, num2);
    } else {
        printf("%d is NOT equal to %d \n", num1, num2);
    }
}