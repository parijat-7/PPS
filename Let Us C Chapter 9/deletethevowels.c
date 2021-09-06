#include<stdio.h>
#include<string.h>
int main()
{
    char line[80],ar[5],newline[80],ch;
    int i=0,j=0,k=0,count=0;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter a sentence:\n");
    gets(line);
    while(line[i]!='\0')
    {
        ch=line[i];
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count++;
        }
        else
        {
            newline[k]=line[i];
            k++;
        }
        i++;
    }
    newline[k]='\0';
    printf("\nNumber of vowels are %d \n",count);
    printf("\nThe modified line is  \n%s",newline);

}