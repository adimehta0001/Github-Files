#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
printf("Aditya Mehta VIPS BCA Shift-1A);
    return 0;
}