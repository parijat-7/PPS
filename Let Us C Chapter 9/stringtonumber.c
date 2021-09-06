#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, num, fin = 0;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a string of numbers : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        num = str[i] - 48;
        fin = fin * 10 + num;
    }
    printf("\nNumber : %d", fin);
    return 0;
}
