#include<stdio.h>
int main()
{
        int i,n,fact = 1,a,c=2,num,choice;
        printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
        printf("\n1. Factorial");
        printf("\n2. Prime");
        printf("\n3. Odd/Even");
        printf("\n4. Exit");
        printf("\nWhat do you choose?\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
            printf("Enter a number to calculate the factorial of that nummber: \n");
            scanf("%d", &n);
            for (i= 1; i <= n; i++)
            {
                fact = fact * i;
            }
            printf("Factorial of %d = %d\n", n, fact);
            break;   
            case 2:
            printf("Enter a number to check if it is prime\n");
            scanf("%d",&a);
            for ( c = 2;c<= a-1;c++)
            {
                if ( a%c == 0 )
                {
                    printf("%d is not prime.\n", a);
                    break;
                }
            }    
                if ( c == a)
                {
                    printf("%d is prime.\n", a);
                    break;
                }
               
            case 3:
            printf("Enter an integer\n");
            scanf("%d",&num);
            if ( num%2 == 0 )
            {
                printf("Even\n");
                break;
            }    
            else
            {
                printf("Odd\n");
                break;
            }   
            case 4:
            printf("You took the exit"); 
            break;
            default:
            printf("Wrong choice.");
        }
     return 0;
    }
   