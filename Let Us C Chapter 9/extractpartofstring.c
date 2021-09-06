#include<stdio.h>
int main() 
{
    char s[100];
    int i=0,n,pos;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("\nEnter the string \n");
    gets(s);
    printf("\nEnter the position to extract from \n");
    scanf("%d",&pos);
    printf("\nEnter the number of characters to extract \n");
    scanf("%d",&n);
    printf("\n\n\nExtracted string is \n");
    if(n==0) 
    {
        while(s[i]!='\0') 
        {
            if(i>=pos-1) 
            {
                printf("%s",s[i]);
            }
            i++;
        }
    }
    else 
    {
        while(s[i]!='\0') 
    {
        if(i>=pos-1 && i<=pos-1+(n-1)) 
        {
            printf("%c",s[i]);
        }
        i++;
    }
    }
}
