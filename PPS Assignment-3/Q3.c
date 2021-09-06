#include<stdio.h>
int main()
{
    struct lib
    {
        int accession,flag;
        float price;
        char name[20],authname[20];
    };
    struct lib l[20];
    int ch,i=0,acc,j=0,x;
    char author[20];
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
    while(x=1)
    {
    printf("What do u want to do? \n");
    printf("1.Add book information \n");
    printf("2.Display book information \n");
    printf("3.List all books of given author \n");
    printf("4.List the title of specified book \n");
    printf("5.List the count of books in the library \n");
    printf("6.List the books in the order of accession no. \n");
    printf("7.Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("Enter the name of the book: \n");
        fflush(stdin);
            gets(l[j].name);
             printf("Enter the author name: \n");
         fflush(stdin);
            gets(l[j].authname);
            printf("Enter the price of the book: \n");
            scanf("%f",&l[j].price);
            printf("press 0 if book is issued and 1 if it is available: \n");
            scanf("%d",&l[j].flag);
            printf("Record added successfully\n");
            l[j].accession=j;
            j++;
            break;
        }
        case 2:
        {
           for(i=0;i<j;i++)
                puts(l[i].name);
            printf(" ");
            puts(l[i].authname);
            printf("%f ",l[i].price);
            if(l[i].flag==0)
                printf("Book is available\n");
            else
                printf("Book is not available\n");
            break;
        }
        case 3:
        {
            printf("Enter the name of author\n");
            gets(author);
            for(i=0;i<j;i++)
            {
                if(l[i].authname==author)
                {
                    puts(l[i].name);
                    printf("\n");
                }
            }
            break;
        }
        case 4:
        {
            printf("Enter the accession no. of the book\n");
            scanf("%d",&acc);
            for(i=0;i<j;i++)
                if(l[i].accession==acc)
                {
                    puts(l[i].name);
                    printf("\n");
                }
            break;
        }
        case 5:
        {
            printf("%d",j);
            break;
        }
        case 6:
        {
            for(i=0;i<j;i++)
            {
                puts(l[i].name);
                printf("\n");
            }
            break;
        }
        case 7:
        {
            x=2;
            break;
        }
    }
    }
    return 0;
}