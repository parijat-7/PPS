#include<stdio.h>
#include<string.h>
void replace();
int  main() 
{
    char *str[] = {
    "We will teach you how to...",
    "Move a mountain",
    "Level a building",
    "Erase the past",
    "Make a million",
    "...all through C !"
    };
    char str1[80],str2[80];
    int i;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    for(i=0;i<6;i++) 
    {
        printf(" %s\n",*(str+i));
    }
    printf("Enter the word to search: ");
    gets(str1);
    printf("\n\nEnter the word to replace: ");
    gets(str2);
    printf("\nBefore modification:\n\n");
    for(i=0;i<6;i++) 
    {
        printf(" %s\n",*(str+i));
    }
    printf("\nAfter modification:\n\n");
    for(i=0;i<6;i++) 
    {
        replace(*(str+i),str1,str2);
    }
    return 0;
}
void replace(char *s, char s1[80], char s2[80]) 
{
    int i=0,j=0,k=0;
    char temp[100],temp2[100],main[100],*t=temp;
    while(*s!='\0') 
    {
        *t=*s;
        t++;
        s++;
    }
    *t='\0';
    while(temp[i]!='\0') 
    {
        temp2[j]=temp[i];
        if(temp[i]==' ') 
        {
            temp2[j]='\0';
            if(strcmpi(temp2,s1)==0) 
                {
                strcpy(temp2,s2);
                }
            j=0;
            while(temp2[j]!='\0') 
                {
                main[k]=temp2[j];
                k++;
                j++;
                }
            main[k]=' '; 
            k++;     
            j=-1;
        }
        i++;
        j++;
    }
    temp2[j]='\0';              
    if(strcmpi(temp2,s1)==0)
    {   
        strcpy(temp2,s2);
    }
    j=0;
    while(temp2[j]!='\0') 
    {
        main[k]=temp2[j];
        k++;
        j++;
    }
    main[k]='\0';
    printf(" %s\n",main);     
}