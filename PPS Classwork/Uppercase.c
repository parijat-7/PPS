#include <stdio.h>
#include <string.h>
int main() 
{
   char s[700];
   int i;
   printf("\nEnter a string : \n");
   gets(s);
   for (i = 0; s[i]!='\0'; i++) 
   {
      if(s[i] >= 'a' && s[i] <= 'z') 
      {
         s[i] = s[i]-32;
      }
   }
   printf("\n");
   printf("The given string in upper case = %s", s);
   return 0;
}