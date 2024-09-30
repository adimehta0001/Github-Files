#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
    } else {
        int is_prime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is a composite number.\n", num);
        }
    }
printf("Aditya Mehta VIPS  BCA Shift-1A")
    return 0;
}