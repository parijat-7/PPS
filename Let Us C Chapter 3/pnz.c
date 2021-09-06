#include<stdio.h>
int main()
{
    int num, p=0,n=0,z=0;
    char choice;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    do{
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0)
    {
        p++;
    }
    else if(num<0)
    {
        n++;
    }
    else
    {
        z++;
    }
    fflush(stdin);
    printf("Do you want to continue?(y/n)");
    scanf("%c",&choice);
    }
    while(choice=='y');
    printf("\nNo. of positive entries is %d\nNo. of negative entries is %d\nNo. of zero entries is %d",p,n,z);
    return 0;
}