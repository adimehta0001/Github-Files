#include<stdio.h>
int main()
{
    //program to find if a person is elegible to vote or not
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    if(age>=18)
    printf("You are elegible to vote");
    else if (age==0)
    printf("You are not even born");
    else    
    printf("You are not eligible to vote");
    return 0;
}