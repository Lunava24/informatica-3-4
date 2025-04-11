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
    //Exercise 2
    int num3;
    printf("enter one number: ");
    scanf("%d", &num3);
    if (num3%2 == 0) {
        printf("number is even\n");
    } else {
        printf("number is odd\n");
    }
    //Exercise 3
    int number1;
    printf("enter 1 to 7 number");
    scanf("%d", &number1);
    if (number1 == 1) {
        printf("Its sunday");
    }
    else if (number1 == 2) {
        printf("Its Monday");
    }
    else if (number1 == 3) {
        printf("Its Tuesday");
    }
    else if (number1 == 4) {
        printf("Its Wednesday");
    }
    else if (number1 == 5) {
        printf("Its Thursday");
    }
    else if (number1 == 6) {
        printf("Its Friday"); 
    }
    else if (number1 == 7) {
        printf("Its Saturday");
    }
    return 0;
}