#include<stdio.h>
#include<math.h>
int area(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    area(a,b,c);
    return 0;
}
int area(int a, int b, int c)
{
    float s,ar;
    s = (a+b+c)/2.0;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle: %f",ar);
    return 0;
}