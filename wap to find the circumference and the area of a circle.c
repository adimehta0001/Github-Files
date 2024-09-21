#include<stdio.h>
int main()
{
    //program to find the circumference and the area of a circle
    int radius;
    int area;
    int circumference;
    int pie=3.14; 
    printf("Enter the radius of the circle");
    scanf("%d",&radius);
    circumference= 2*pie*radius;
    area= pie*radius*radius;
    printf("The circumfernce of the circle is %d",circumference);
    printf("The area of the circle is %d",area);
    return 0;
}   