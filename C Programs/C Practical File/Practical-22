#include <stdio.h>

int main() {
    int consumption;

    printf("Enter your electricity consumption in units: ");
    scanf("%d", &consumption);

    float charge;

    if (consumption <= 200) {
        charge = consumption * 0.50;
    } else if (consumption <= 400) {
        charge = 100 + (consumption - 200) * 0.65;
    } else if (consumption <= 600) {
        charge = 230 + (consumption - 400) * 0.80;
    } else {
        charge = 390 + (consumption - 600) * 1.00;
    }

    printf("Your electricity charge is: Rs. %.2f\n", charge);
    printf("Aditya Mehta VIPS BCA Shift-1A")
    return 0;
}