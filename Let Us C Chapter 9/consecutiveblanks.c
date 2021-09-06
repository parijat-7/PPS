#include <stdio.h>
#include <string.h>
int main()
{
    char s[700];
    int i=0,count=0;;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter any string: \n");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            count++;
            i++;
            continue;
        }
        if(count>1)
        {
            printf(" %c",s[i]);
            count=0;
        }
        else
        {
            printf("%c",s[i]);
        }
        i++;
    }
    return 0;
}
