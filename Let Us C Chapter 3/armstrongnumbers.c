#include<stdio.h>
int main()
{
    int n,c=1,r,s;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    while(c<500)
    {
        n=c;
        s=0;
        while(n!=0)
        {
            r=n%10;
            s=s+(r*r*r);
            n=n/10;
        }
        if(c==s)
        {
            printf("%d is an Armstrong number.\n",c);
        }
        c++;
    }
    return 0;
}