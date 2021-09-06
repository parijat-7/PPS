#include<stdio.h>
int main()
{
    char ch;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    printf("Enter a character = ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("%c is an upper case alphabet",ch);
    }
    if(ch>=97 && ch<=122)
    {
        printf("%c is a lower case alphabet",ch);
    }
    if(ch>=47 && ch<=58)
    {
        printf("%c is a number",ch);
    }
    else if((ch>=0) && (ch<=47) || (ch>=58) && (ch<=64) || (ch>=91) && (ch<=96) || (ch>=123) && (ch<=127))
    {
        printf("%c is a special character",ch);
    }
    return 0;
}