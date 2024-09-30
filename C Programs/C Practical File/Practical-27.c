#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of tables to generate: ");
    scanf("%d", &n);

    int i = 1;
    do {
        int j = 1;
        printf("Multiplication table of %d:\n", i);
        do {
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= n);
    printf("Aditya Mehta VIPS BCA Shift-1A")
    return 0;
}