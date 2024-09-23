#include<stdio.h>
int main()
{
    int grades;
    printf("Input your marks");
    scanf("%d",&grades);
    if (grades<=90)
    printf("A Grade");
    else if(grades<=80 && grades <90)
        printf("B Grade");
    else if(grades<=70 && grades <80)
        printf("C Grade");
    else if(grades<=60 && grades <70)
        printf("D Grade");
    else 
    printf("You Failed");
    return 0;
}
