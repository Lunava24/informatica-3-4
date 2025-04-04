#include <stdio.h>

int main(){
    int lenght = 17;
    int width = 12;
    int area = lenght * width;
    int perimeter = (lenght * 2 )+( width * 2);

    printf("\narea : %d\n", area);
    printf("perimeter : %d\n", perimeter);

    int fahrenhite = 20;
    int celsius = (fahrenhite - 32) / 1.8;
    printf("\n%d°F = %d°C\n", fahrenhite, celsius);

    int time = 349;
    int hours = time/60;
    int minutes = time%60;
    printf("\n%d minutes is equal to %d hours and %d minutes.\n", time, hours, minutes);
    return 0;
}