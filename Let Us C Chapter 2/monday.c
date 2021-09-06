#include<stdio.h>
int main()  
{  
    int ref_year = 1900, year, leap = 0, diff, total_days = 0, day = 0;  
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    printf("Enter a year between 1900 and 2099\n");  
    scanf("%d", &year);  
    diff = year - ref_year;  
    while(ref_year < year)  
    {  
        if(ref_year % 100 == 0)  
        {  
            if(ref_year % 400 == 0)  
            {  
                leap++;  
            }  
        }  
        else  
        {  
            if(ref_year % 4 == 0)  
            {  
                leap++;  
            }  
        }  
        ref_year++;  
    }  
    total_days = (diff - leap) * 365 + leap * 366;  
    day = total_days % 7;  
    printf("\nThe day on 01 January %d was ", year);  
    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
    return 0;  
}  
