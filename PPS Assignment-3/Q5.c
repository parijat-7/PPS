#include<stdio.h>
#include<string.h>
int main()
{
    char str1[70]="Parijat", str2[70]="Kumar", name[70], *s1 = "Duplicated",*s2;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    puts("Enter your name:");
    gets(name);
    puts(name);
    printf("The length of first string is %d\n",strlen(str1));
    printf("The first string in lowercase is %s\n",strlwr(str1));
    printf("The first string in uppercase is %s\n",strupr(str1));
    if (strcmp(str1, str2) ==0)
    {
        printf("String 1 and String 2 are equal\n");
    }
     else
    {
        printf("String 1 and String 2 are different\n");
    }
    strcat(str1,str2);
    printf("Output String after concatenation: %s\n", str1);
    strcpy(str1,str2);
    printf("String 1 is now : %s\n", str1);
    printf ("The character 'K' is found in string 1 at %s\n", strchr(str1, 'K'));
    printf("The occurence of string 'Kum' is found in string at %s\n",strstr(name, "Kum" ));
    printf("String entered is: %s\n",name);
    printf("The reverse of that string is: %s\n",strrev(name));
    s2 = strdup(s1);
    printf("Duplicated string is : %s\n", s2);
    printf("The name string now is %s\n",strset(name,'#'));
    return 0;
}
