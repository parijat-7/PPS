#include<stdio.h>
int main()
    {
        int y;
        printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
        printf("Enter the year to know whether it is a leap year: ");
        scanf("%d",&y);
        if(y%4==0 && y%100!=0 || y%400==0)
        {
            printf("The year %d is a leap year",y);
        }
        else
        {
            printf("The year %d is not a leap year",y);
        }
        return 0;
    }
