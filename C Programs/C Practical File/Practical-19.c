#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    printf("Maximum of three numbers is: %d\n", max);
    printf("Aditya Mehta BCA Shift-1 Section A\n");
    return 0;
}