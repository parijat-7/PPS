#include<stdio.h>
int shift(int *a, int *b, int *c);
int main()
{
    int x, y, z;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    printf("Before Shift:\nx: %d\ny: %d\nz: %d",x,y,z);
    shift(&x, &y, &z);
    printf("\nAfter Shift:\nx: %d\ny: %d\nz: %d",x,y,z);
    return 0;
}
int shift(int *a, int *b, int *c)
{
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
    return 0;
}