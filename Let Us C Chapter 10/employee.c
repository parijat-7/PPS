#include<stdio.h>
#include<string.h>
int main()
{
    struct employee
    {
        char name[40];
        int code,doj,moj,yoj;
    };
    struct employee e[3];
    int i,d,m,y,yr;
    printf("Name: Parijat Kumar\nRoll No.: 20001016037\n***************\n");
      for(i=0;i<3;i++)
    {
        printf("Enter employee code: \n");
        scanf("%d",&e[i].code);
        fflush(stdin);
        printf("Enter employee name: \n");
        gets(e[i].name);
        printf("Enter date of joining in dd/mm/yy format \n");
        scanf("%d/%d/%d",&e[i].doj,&e[i].moj,&e[i].yoj);
        printf("Enter current date dd/mm/yy format\n");
        scanf("%d/%d/%d",&d,&m,&y);
        yr=y-e[i].yoj;
        if(yr>3)
        {
            printf("%s \n",e[i].name);
            continue;
        }
        if(yr==3)
        {
            if(e[i].moj>m)
            {
                printf("%s \n",e[i].name);
                continue;
            }
        }
        if(e[i].moj==m)
        {
            if(e[i].doj>=d)
            {
                printf("%s \n",e[i].name);
            }
        }
    }
    return 0;
}