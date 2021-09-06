#include<stdio.h>  
int main()  
{  
    int g, f,grace=0;  
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    printf("Enter the class obtained by the student\n");  
    scanf("%d", &g);  
    printf("How many subjects has the student f\n");  
    scanf("%d", &f);  
    switch(g)  
    {  
        case 1:  
        if(f > 3)  
        {   
            grace = 0;  
        }
        else  
        {
            grace = 5;  
        }
        break;  
        case 2:  
        if(f > 2)  
        {
            grace = 0;  
        }
        else  
        {
            grace = 4;  
        }
        break;
        case 3:  
        if(f > 1)  
        {
            grace = 0;  
        }
        else  
        {
            grace = 5;  
        }
        break;
        default: printf("You entered wrong class for the student\n");  
  
    }  
    if(g == 1 || g == 2 || g == 3)  
    {  
        printf("The student has obtained a grace marks of %d per subject\n",grace);
    }
    return 0;
}