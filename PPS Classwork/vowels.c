#include<stdio.h>
int main()
{
    char str[70];
    int i,count = 0;
    printf("Write something to find no. of vowels: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||  str[i] == 'o' ||  str[i] == 'u' 
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||  str[i] == 'O' ||  str[i] == 'U')
        {
            count++;
        }
    }
    printf("No. of vowels in the given string = %d\n",count);
    
    return 0;
}