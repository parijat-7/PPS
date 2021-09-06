#include<stdio.h>
#include<string.h>
void replace();
int main() 
{
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    FILE *fp,*ft;
    char str[80],target[80];
    fp=fopen("FILE.TXT","r");
    if(fp==NULL) 
    {
        puts("Source file cannot be opened.");
    }
    ft=fopen("NEW.TXT","w");
    if(ft==NULL) 
    {
        puts("Target file cannot be opened.");
    }
    while(fgets(str,79,fp)!=NULL) 
    {
        replace(str,&target);
        fputs(target,ft);
    }
    fclose(fp);
    fclose(ft);
    printf("\nTask completed!\n");
    return 0;
}
void replace(char *s, char *s1) 
{
        int i=0,j=0,k=0;
        char temp[100],temp2[100],main[100],*t=temp,*m=main;
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
            if(strcmpi(temp2,"the")==0) 
            {
                strcpy(temp2," ");
            }
            else if(strcmpi(temp2,"an")==0) 
            {
                strcpy(temp2," ");
            }
            else if(strcmpi(temp2,"a")==0) 
            {
                strcpy(temp2," ");
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
        if(strcmpi(temp2,"the")==0)
        {   
            strcpy(temp2," ");
        }
        else if(strcmpi(temp2,"an")==0) 
        {
            strcpy(temp2," ");
        }
        else if(strcmpi(temp2,"a")==0) 
        {
            strcpy(temp2," ");
        }
        else 
        {
            j=0;
            while(temp2[j]!='\0') 
            {
                main[k]=temp2[j];
                k++;
                j++;
            }
            main[k]='\0';   
        }
        while(*m!='\0') 
        {
            *s1=*m;
            s1++;
            m++;
        }
        *s1='\0';
}
