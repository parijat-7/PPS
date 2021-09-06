#include<stdio.h>
int main()
{
  int m, n, p, q, c, d, k, product = 0;
  int fm[10][10], sm[10][10], mm[10][10];
  printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d %d",&m,&n);
  printf("Enter the elements of first matrix: \n");
  for (c=0;c<m;c++ )
  {
    for (d=0;d<n;d++ )
    {
      scanf("%d", &fm[c][d]);
    }
  }
  printf("Enter the number of rows and columns of second matrix: \n");
  scanf("%d %d",&p,&q);
  if (n!=p)
  {
    printf("The matrices cannot be multiplied.\n");
  }
  else
{
    printf("Enter the elements of second matrix: \n");
    for (c=0;c<p;c++)
    {
      for (d=0;d<q;d++)
        {
        scanf("%d", &sm[c][d]);
        }
    }    
    for (c=0;c<m;c++)
    {
      for (d=0;d<q;d++)
      {
        for (k=0;k<p;k++)
        {
            product = product + fm[c][k]*sm[k][d];
        }
        mm[c][d] = product;
        product = 0;
      }
    }
    printf("Product of the given matrices is \n");
    for (c=0;c<m;c++)
    {
      for (d=0;d<q;d++)
        {
            printf("%d ",mm[c][d]);
        }
        printf("\n");
    }
}
  return 0;
}