#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int n,i,c=0,l;
     printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a sentence\n");
    gets(string);
    n=strlen(string);
    for(i=0;i<n;i++)
    {
        if(string[i]==' '&&string[i+1]=='t'&&string[i+2]=='h'&&string[i+3]=='e'&&string[i+4]==' ')
        {
            string[i+1]=' ';
            string[i+2]=' ';
            string[i+3]=' ';
        }
    }
        for(i=0;i<n;i++)
        {
            printf("%c",string[i]);
        }
    return 0;
}