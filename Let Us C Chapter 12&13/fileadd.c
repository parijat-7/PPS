#include<stdio.h>
int main() 
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("FILE1.TXT","r");    
    f2=fopen("FILE2.TXT","a+");   
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    if(f1==NULL || f2==NULL) 
        {
            printf("\ncannot open one of files!");
        }
    while(1) 
        {
            ch=fgetc(f1);
            if(ch==EOF) 
            {
                break;
            }
            fputc(ch,f2);
        }
    fclose(f1);
    fclose(f2);
    printf("\nTask completed successfully!");
    return 0;
}
