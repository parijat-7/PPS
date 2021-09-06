#include <stdio.h>
int main()
{
    char a;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter an alphabet in lower case to convert it into upper case: ");
    scanf("%c",&a);
    printf("The alphabet in upper case: %c",a-32);

    return 0;
}