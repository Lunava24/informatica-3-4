#include <stdio.h>
#include <math.h>

int main(void) {
    int num, exponent, result;

    printf("Enter the base number: ");
    scanf("%d", &num);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    //int base_num = num;  
    //while (exponent != 1) { num = num * base_num;
     //   --exponent; }

    result = pow(num,exponent);

    printf("%d\n", result);
}