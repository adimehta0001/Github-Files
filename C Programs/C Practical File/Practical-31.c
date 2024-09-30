#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }

    printf("Sum of first %d odd natural numbers is: %d\n", n, sum);
    printf("Aditya Mehta VIPS BCA Shift-1A")
    return 0;
}