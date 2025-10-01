/*
Name: Jane Njeri Muthoni
Reg No.CT101/G/26472/25
Date: 25th September 
#include <stdio.h>

int main() {
    float height, bankBalance;
    char phoneNumber[20];   // store phone number as a string

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your bank balance: ");
    scanf("%f", &bankBalance);

    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);

    printf("\n--- User Information ---\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: %.2f\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}