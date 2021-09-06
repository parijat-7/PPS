#include<stdio.h>
int main() 
{
    int i,arr[25],prsnt=0,num;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("\nPlease enter 25 numbers: \n");
    for(i=0;i<25;i++) 
        {
            scanf("%d",&arr[i]);
        }
    printf("\nPlease enter the number to be searched: \n");
    scanf("%d",&num);
    for(i=0;i<25;i++) 
        {
            if(num==arr[i])
            {
                prsnt=prsnt+1;
            }
        }
    if(prsnt==0)
    {
        printf("\nNumber does not present in the array.\n");
    }
    else 
    {
        printf("\nNumber is present in the array. \n");
        printf("\nNumber of times '%d' appears = %d \n",num,prsnt);
    }
return 0;
}