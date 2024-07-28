#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;

    printf("Enter No. A: ");
    scanf("%d",&a);

    printf("\nEnter No. B: ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Swapped Value Of A: %d",a);
    printf("\nSwapped Value Of B: %d",b);

    return 0;
}