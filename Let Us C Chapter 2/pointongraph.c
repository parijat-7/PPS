#include<stdio.h>
int main()
{
    float x,y;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    printf("Enter the coordinates: ");
    scanf("%f %f",&x,&y);
    if(x!=0 && y==0)
    {
        printf("The point is on x-axis");
    }
    else if(x==0 && y!=0)
    {
        printf("The point is on y-axis");
    }
    else if(x==0 && y==0)
    {
        printf("The point is at the origin");
    }
    else
    {
        printf("The point lies neither on the x-axis nor on the y-axis");
    }


    return 0;
}