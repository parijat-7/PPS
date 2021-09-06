#include<stdio.h>
int main()
    {
        int days;
        float fine;
        printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
        printf("Enter the no. of days: ");
        scanf("%d",&days);
        if(days>0 && days<=5)
        {
            fine=0.50*days;
        }
        else if(days>5 && days<=10)
        {
            fine=1*days;
        }
        else if(days>10)
        {
            fine=5*days;
        
            if(days>30)
                {
                    printf("Your membership is cancelled.\n");
                }
        }
        printf("Your fine is Rs.%.2f",fine);
        return 0;
    }