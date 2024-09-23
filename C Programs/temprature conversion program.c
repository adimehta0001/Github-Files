#include<stdio.h>
#include<math.h>
int main()
{
    int tempreading;
    char tempunit;
    printf("Write the temprature reading");
    scanf("%d",&tempreading)
    printf("Write the unit of the temprature scale");
    scanf("%c",& tempunit);
    switch (tempunit)
    {
        case'C':
        tempreading=tempreading*33.8;
        printf("The temprature is %d",tempreading);
        break;
        case'F'
        tempreading= tempreading-32/1.8;
        printf("The temprature is %d",tempreading);
        break;
    }
    return 0;
}