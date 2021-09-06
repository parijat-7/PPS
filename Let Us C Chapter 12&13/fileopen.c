#include<stdio.h>
main()
{
    FILE *fs;
    char ch;
    int i=1;
    fs=fopen("hello.c","r");
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    if(fs==NULL)
    {
        printf("can't open source file");
        exit(1);
    }
    printf("%d",i++);
    while(1)
    {
        ch=fgetc(fs);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
        if(ch=='\n')
        {
            printf("%d",i);
            i++;
        }
    }
    fclose(fs);
}