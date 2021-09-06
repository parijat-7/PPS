#include<stdio.h>
int action(int, int, int);
int below100();
struct acc_holder
{
	long int acc_num;
	char name[30];
	int bal;
} 
sbi[200] = { 
1, "Aditya", 17042001,
2, "Himanshu", 12092001,
3, "Tushar", 18072002,
4, "Mehak", 13072002,
5, "Parijat", 7};
int main()
{
	printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
	int accnum, amount, code;
	printf("\nEnter your account number : ");
	scanf("%d", &accnum);
	printf("Enter 1 for deposit and 0 for withdrawal : ");
	scanf("%d", &code);
	if (code==1)
	{
		printf("\nEnter amount to be deposit : ");
		scanf("%d", &amount);
	}
	else if(code==0)
	{
		printf("\nEnter amount to withdraw : ");
		scanf("%d", &amount);
	}
    else
    {
        printf("Enter a valid number.");
    }
	action(accnum, amount, code);
	printf("All members with account balance less than 100 are following : \n");
	below100();
	return 0;
}
int below100()
{
	int i;
	for (i = 0; i < 200; i++)
	{
		if (sbi[i].bal < 100 && sbi[i].bal > 0)
		{
			printf("\nName : %s\n", sbi[i].name);
			printf("\nAccount Number : %d\n", sbi[i].acc_num);
		}
	}
    return 0;
}
int action(int accnum, int amount, int code)
{
	int i;
	for (i = 0; i < 200; i++)
		if (sbi[i].acc_num == accnum)
			break;
	if (!code)
	{
		if (sbi[i].bal - amount < 100)
		{
			printf("\nThe balance is insufficient for the specified withdrawal\n");
		}
		else
		{
			sbi[i].bal -= amount;
			printf("\nYour new account balance is : %d\n", sbi[i].bal);
		}
	}
	else
	{
		sbi[i].bal += amount;
		printf("\nYour new account balance is : %d\n", sbi[i].bal);
	}
    return 0;
}