#include<stdio.h>
int main()
{
    int n,t,f,h,l;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the amount to be withdrawn in hundreds: ");
    scanf("%d",&n);
    h=(n/100);
    f=((n%100)/50);
    t=(((n%100)%50)/10);
    
    printf("\nThe required number of Rs.100 notes is %d",h);
    printf("\nThe required number of Rs.50 notes is %d",f);
    printf("\nThe required number of Rs.10 notes is %d",t);
    

    return 0;
}