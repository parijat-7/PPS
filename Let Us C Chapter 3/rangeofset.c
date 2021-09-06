#include<stdio.h>
int main()  
{  
    int s, l, r, n, limit; 
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n"); 
    printf("Enter the limit\n");  
    scanf("%d", &limit);  
    printf("Enter %d numbers\n", limit);  
    scanf("%d", &n);  
    s = l = n;  
    limit = limit - 1;  
    while(limit!=0)  
    {  
        scanf("%d", &n);  
        if(n > l)  
        {  
            l = n;  
        }  
        if(n < s)  
        {  
            s = n;  
        }  
        limit--;  
    }
    r = l - s;
    printf("Smallest Number = %d\nLargest Number = %d\n", s, l);  
    printf("Range is %d\n", r);  
    return 0;  
}  