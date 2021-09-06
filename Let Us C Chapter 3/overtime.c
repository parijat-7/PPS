#include<stdio.h>
int main()
{
    int n=1,h,o;
    float p;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    while(n<=10)
    {
        printf("Enter the no. of working hours of employee no.%d: ",n);
        scanf("%d",&h);
        if(h>40)
        {
            o=h-40;
            p=12.00*o;
            printf("The overtime pay is Rs. %f\n",p);
        }
        else
        {
            printf("No overtime pay\n");
        }
    n++;
    }
    return 0;
}