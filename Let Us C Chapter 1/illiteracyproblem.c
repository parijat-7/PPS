#include<stdio.h>
int main()
{
    float m,w,lm,lw,l,il,tp;
    int nilm, nilw;
    l=48;
    il=100-l;
    m=52;
    w=100-m;
    lm=35;
    lw=l-lm;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the population of the town: ");
    scanf("%f",&tp);
    nilm=((m*tp)/100)-((lm*tp)/100);
    nilw=((w*tp)/100)-((lw*tp)/100);
    printf("\nThe number of illiterate men in the town is %d",nilm);
    printf("\nThe number of illiterate women in the town is %d",nilw);


    return 0;
}