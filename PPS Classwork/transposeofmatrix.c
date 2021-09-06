#include <stdio.h>
int main()
{
    int m,n;                
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);   
    int arr[m][n];        
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<m;i++)    
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The elements in the matrix are: \n");
    for(int i=0;i<m;i++)     
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int transpose[n][m];         
    for(int i=0;i<m;i++)     
    {
        for(int j=0;j<n;j++)
        {
            transpose[j][i]=arr[i][j];     
        }
    }
    printf("After transpose the elements are: \n");
    for(int i=0;i<n;i++)      
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}