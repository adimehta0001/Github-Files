#include<stdio.h>
#include<math.h>
int main()
{
    //wap to find the hypotenuse of a traingle
    int base;
    int height;
    int hypotenuse;

    printf("Enter the base of the traingle");
    scanf("%d",&base);
    printf("Enter the height of the triangle");
    scanf("%d",&height);
    hypotenuse= sqrt(base*base+height*height); 
    printf("The hypotenuse of the traingle is %d",hypotenuse);
    return 0;
}