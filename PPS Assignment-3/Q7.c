#include<stdio.h>
#include<string.h>
int main() 
{
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    FILE *fs;
    char s[80];
    void rev();
    fs=fopen("INPUT.TXT","r");
    if(fs==NULL) 
    {
        printf("File cannot be opened.");
    }
    while(fgets(s,79,fs)!=NULL)
        rev(s);
        fclose(fs);
    return 0;
}
void rev(char s1[80]) 
{
    char s2[80];
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        s2[j]=s1[i];
        if(s1[i]==' ' || s1[i]=='\0') 
        {
            s2[j]='\0';
            strrev(s2);
            printf("%s ",s2);
            j=-1;
        }
        i++;
        j++;
    }
    s2[j]='\0';
    printf("%s",strrev(s2));
}