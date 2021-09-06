#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        b=i+1;
        a=n-b;
        if(arr[i]==arr[a])
        {
            printf("arr[%d] = arr[%d-%d] ",i,n,b);
        }
    }
    return 0;
}