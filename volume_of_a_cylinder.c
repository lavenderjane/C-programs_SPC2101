/*
Name: Jane Njeri Muthoni
Reg No.CT101/G/26472/25
Date:25th September 
*/
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height, volume, surfaceArea;

    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface Area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}