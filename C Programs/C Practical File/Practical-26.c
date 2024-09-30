#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        result *= x;
        i++;
    }

    printf("%d raised to the power of %d is: %lld\n", x, n, result);
    printf("Aditya Mehta VIPS BCA Shift-1A")
    return 0;
}