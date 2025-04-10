#include <stdio.h>

int main(){
    int lenght;
    printf("\nEnter a ractangular lenght: ");
    scanf("%d", &lenght);

    int width;
    printf("\nEnter a ractangular width: ");
    scanf("%d", &width);
    int area = lenght * width;
    int perimeter = (lenght * 2 )+( width * 2);

    printf("\narea : %d\n", area);
    printf("perimeter : %d\n", perimeter);

    int fahrenhite;
    printf("\nEnter farenhite: ");
    scanf("%d", &fahrenhite);
    int celsius = (fahrenhite - 32) / 1.8;
    printf("\n%d°F = %d°C\n", fahrenhite, celsius);

    int time;
    printf("\ntime: ");
    scanf("%d", &time);
    int hours = time/60;
    int minutes = time%60;
    printf("\n%d minutes is equal to %d hours and %d minutes.\n", time, hours, minutes);

    int radio;
    printf("\nEnter radio: ");
    scanf("%d", &radio);
    float area2 = 3.14 * (radio * 2);
    printf("\n%f", area2);
    return 0;
}