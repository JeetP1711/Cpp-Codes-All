#include<stdio.h>
int main()
{
    int b,a;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);

    if(a<0 || b<0)
    printf("A*B is negative..");

    else
    printf("A*B is positive..");

    return 0;
}