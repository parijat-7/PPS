#include<stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    printf("Enter the age of Ram: ");
    scanf("%d", &ram);

    printf("Enter the age of Shyam: ");
    scanf("%d", &shyam);

    printf("Enter the age of Ajay: ");
    scanf("%d", &ajay);

    if (ram<=shyam)
    {
        if(ram<=ajay)
        {
            printf("Ram is the Youngest");
        }
        else
        {
            printf("Ajay is the Youngest");
        }
    }
    else if(shyam<=ajay)
    {
        printf("Shyam is the Youngest");
    }
    else
    {
        printf("Ajay is the Youngest");
    }
    return 0;
}