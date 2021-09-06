#include<stdio.h>
int main()
{
      int a[5],*s,i,small;
      s=&a[0];
      printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
      printf("Enter 5 elements \n");
      for(i=0;i<5;i++,s++)
        {
            scanf("%d",s);
        }
      s=&a[0];
      small=*s;
      for(i=0;i<5;i++,s++)
            if(*s<small)
            {
                small=*s;
            }
      printf("\nSmallest element in the given array is %d",small);
      return 0;
}