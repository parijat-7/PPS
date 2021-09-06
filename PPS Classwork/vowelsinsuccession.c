#include<stdio.h>
int main()
{
    char a[700],count=0;
    printf("Enter the line: ");
    gets(a);
    printf("Two vowels in succession are: ");
    for(int i=0; a[i]!='\0';i++)
    {
        if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'||a[i]=='u' )
        {
            if(a[i+1]=='a'|| a[i+1]=='e'|| a[i+1]=='i'|| a[i+1]=='o'|| a[i+1]=='u')
            {
                count++;
                printf("  %c%c  ",a[i],a[i+1]);
            }
        }
    }
    printf("\nNo. of occurences of two vowels in succession = %d\n ",count);
    return 0;
}