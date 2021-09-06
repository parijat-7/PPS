
#include<stdio.h>
int main()
{
    int m = 21, u, c;
    printf("Name: Parijat Kumar\nRoll No.:20001016037\n****************\n");
    while(m>=1)
    {
        printf("Total Match Sticks: %d\n", m);
        printf("Pick up match sticks between (1 to 4): ");
        scanf("%d", &u);

        if(u>4)
        {
            printf("Wrong entry");
            break;
        }
        c = 5 - u;
        printf("Computer picks up the %d match sticks.\n", c);
        m = m-u-c;
        if(m==1)
        {
            printf("There is only one matchstick left.");
            printf("\nYou have lost to the computer.");
            break;
        }
    }
    return 0;
}