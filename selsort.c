#include<stdio.h>
#include<conio.h>
void main()
{
    int num[10];
    int i,j,t;

    printf("Enter 10 No. : \n");

    for(i=0;i<10;i++)
    {
        printf("Enter %d No. : ",i+1);
        scanf("%d",&num[i]);
    }

    t=num[0];

    printf("\nThe Numbers Are: \n");
    for(i=0;i<10;i++)
    {
        if(t>num[i])
        {
            t=num[i];
        }
        printf("%d\n",num[i]);
    }

    printf("\nAnd The Smallest No. is : %d",t);
}