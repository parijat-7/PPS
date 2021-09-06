#include<stdio.h>
int modify();
int main() 
{
    int i,j,a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("\nArray before modification \n");
    for(i=0;i<10;i++) 
    {
        printf(" %d ",a[i]);
    }
    modify(a);  
    printf("\nArray after modification:\n");
    for(i=0;i<10;i++) 
    {   
        printf(" %d ",a[i]);
    }
    return 0;
}
int modify(int b[10]) 
{
    int c;
    for(c=0;c<10;c++)
    {
        b[c]=b[c]*3; 
    }
    return b[c];
}