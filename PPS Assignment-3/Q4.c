#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct date d1,d2;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter first date in the dd/mm/yyyy format: \n");
    scanf("%d/%d/%d",&d1.day,&d1.month,&d1.year);
    printf("\nEnter second date in the dd/mm/yyyy format: \n");
    scanf("%d/%d/%d",&d2.day,&d2.month,&d2.year);
    if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
    {
        printf("\nEQUAL");
    }
    else
    {
        printf("\nUNEQUAL");
    }
return 0;
}