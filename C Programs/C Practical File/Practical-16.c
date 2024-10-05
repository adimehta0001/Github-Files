#include <stdio.h>
#define discount 0.10

int main() 
{
    int itemNumber[3];
    int quantity[3];
    int price[3];
    int totalPrice = 0;
    float netbill;

    printf("Name: Aditya Mehta \nClass: 1A\n\v");

    // Loop to input data for 3 products
    for (int i = 0; i < 3; i++) {
        printf("Write the item number for product %d: ", i + 1);
        scanf("%d", &itemNumber[i]);

        printf("Write the quantity for product %d: ", i + 1);
        scanf("%d", &quantity[i]);

        printf("Write the price for product %d: ", i + 1);
        scanf("%d", &price[i]);

        // Calculate total price for each product and add to total bill
        totalPrice += quantity[i] * price[i];
    }

    printf("\nTotal Bill Before Discount: %d\n", totalPrice);

    // Apply 10% discount
    netbill = totalPrice - (totalPrice * discount);

    printf("The Net Bill Value after the 10%% discount is: %.2f\n", netbill);
    
    return 0;
}
