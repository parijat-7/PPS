#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float x,d,p,t,r=0;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the value of x: ");
    scanf("%f", &x);
    d=(x-1)/x;
    for(i=2;i<=7;i++)
    {
        p = pow(d,i);
        t = p/2;
        r = r + t;
    }
    r = d + r;
    printf("The required value is %f",r);
    return 0;
}