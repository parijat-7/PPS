#include <stdio.h>
int main()
{
int i,j,key;
int a[25]={24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
for(i=1;i<25;i++)
{
	key=a[i];
	while(i>0 && a[i-1]>key) 
    {
		j=a[i];
		a[i]=a[i-1];
	    a[i-1]=j;
	    --i;
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

