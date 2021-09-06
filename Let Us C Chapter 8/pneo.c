#include<stdio.h>
int main() 
{
    int i,arr[25],tz=0,tp=0,tn=0,te=0,to=0;;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("\nEnter numbers in the array: \n");
    for(i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
            {
                tn=tn+1;
            }
        if(arr[i]==0)
            {
                tz=tz+1;
            }
        if(arr[i]>0)
            {
                tp=tp+1;
            }
        if(arr[i]%2==0)
            {
                te=te+1;
            } 
        if(arr[i]%2!=0)
            {
                to=to+1;
            }
    }
    printf("\nTotal zeros = %d\n",tz);
    printf("\nTotal positive numbers = %d\n",tp);
    printf("\nTotal negative numbers = %d\n",tn);
    printf("\nTotal even numbers = %d\n",te);
    printf("\nTotal odd numbers = %d\n",to);
    return 0;
}