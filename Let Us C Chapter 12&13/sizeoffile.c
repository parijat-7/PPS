#include<stdio.h>
#include<string.h>
int main() 
{
    FILE *fp;
    char s[80],ch;
    int len=0;
    fp=fopen("input.txt","r");
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    while(fgets(s,79,fp)!=NULL)
        {
            len=len+strlen(s);
        }  
    fclose(fp);
    printf("Length of given file is %d",len);
return 0; 
}