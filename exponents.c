#include <stdio.h>

int main() {
    int num, exponent;

    printf("Enter the base number: ");
    scanf("%d", &num);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int base_num = num;

    while (exponent != 1) { num = num * base_num;
        --exponent;
    }
    printf("%d\n", num);
}