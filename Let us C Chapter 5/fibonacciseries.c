#include<stdio.h>  
  
int fib(int n);  
  
int main()  
{  
    int n, i;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter no of terms of Fibonacci series to be printed\n");  
    scanf("%d", &n);  
  
    for(i = 1; i <= n; i++)  
    {  
        printf("%d ", fib(i));  
    }  
    return 0;  
}  
  
int fib(int n)  
{  
    if(n == 1)  
    {
        return 0;  
    }    
    else if(n == 2 || n == 3)
    {  
        return 1;  
    }
    else
    {
    return( fib(n-1) + fib(n-2) ); 
    } 
}  