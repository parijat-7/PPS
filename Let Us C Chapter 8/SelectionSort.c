#include <stdio.h>
int main()
{
    int i,j,x,min,k;
    int a[25]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    for(i=0;i<25;i++) 
    {
        min=i;
        for(j=i+1;j<25;j++) 
        {
            if(a[min]>a[j]) 
            {
                min=j;
            }
            x=a[min];
            a[min]=a[j];
            a[j]=x;
        }	
    }
    for(k=0;k<25;k++) 
    {
        printf("%d ",a[k]);
    }
        printf("\n");
    return 0;
}