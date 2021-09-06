#include <stdio.h>
#include <string.h>
int main()
{
  	char str[700];
  	int i, l;
  	printf("Please enter a string to find its palindrome:  \n");
  	gets(str);
  	l = strlen(str);
 	printf("The palindrome of the given word is  : "); 
  	for (i = l-1; i >= 0; i--)
  	{
  		printf("%c", str[i]);
  	}
  	return 0;
}