#include<stdio.h>
int main()
{
    char grade;
    printf("Enter your Grade");
    scanf("%c",&grade);
    switch (grade)
    {
        case 'A':
        printf("Fantastic \n");
        break;
        case 'B':
        printf("Good\n");
        break;
        case 'C': 
        printf("Fair Enough\n");
        break ;
        case 'D':
        printf("Need To Improve\n");
        break;
        case 'E':
        printf("Failed\n");
        break ; 
    }
}