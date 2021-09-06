#include<stdio.h>
int main()
{
    int year=0 ,invest=0, alternate=1;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    while(alternate>invest)
    {
        alternate = year *120;
        invest = (1000*year) - 4000;
        year++;
    }
    printf("The minimum life of machine should be %d years", year);
    return 0;
}