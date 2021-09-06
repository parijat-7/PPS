#include<stdio.h>
int main()
{   
    float f=1,t,s=0;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");    
    for (int i = 1; i < 8; i++)
    {
        f=f*i;
        t=i/f;
        s+=t;
    }
    printf("The sum of first seven terms in the series is %f",s);
    return 0;
}