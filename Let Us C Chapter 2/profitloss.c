#include<stdio.h>
int main()
{
    float sp,cp;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    printf("Enter the cost price: ");
    scanf("%f",&cp);
    printf("Enter the selling price: ");
    scanf("%f",&sp);
    if(sp>cp)
    {
        printf("\nYou have made a profit of Rs.%f",sp-cp);
    }
    else if(cp>sp)
    {
        printf("\nYou have made a loss of Rs.%f",cp-sp);
    }
    else
    {
        printf("\nYou have made neither profit nor loss");
    }
    return 0;
}