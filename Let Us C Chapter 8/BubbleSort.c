#include <stdio.h>
int main()
{
    int i,j,x;
    int a[25]={24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    for(i=0;i<25;i++) 
    {
        for(j=i+1;j<25;j++) 
        {
            if(a[i]>a[j]) 
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;	
            }
        }
    }
    int k;
    for(k=0;k<25;k++)
        {
            printf("%d ",a[k]);
        } 
        printf("\n");
    return 0;
}