#include<stdio.h>
#include<string.h>
int main()
{
   char str[70];
   int i;
   printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
   printf("\nEnter the string \n");
   gets(str);
   for(i=0;i<=strlen(str);i++)
   {
      if(str[i]>=97&&str[i]<=122)
      {
        str[i]=str[i]-32;
      }
   }
   printf("\nUpper case string is %s\n",str);
   return 0;
}