//GCD of any number..........
#include<stdio.h>
int main()
{
    int n1,n2,i;
    printf("Enter Number 1 : ");
    scanf("%d",&n1);
    printf("Enter Number 2 : ");
    scanf("%d",&n2);

    printf("GCD of Numbers %d and %d is ",n1,n2);

    if(n2>n1){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    for(i=n1%n2;i!=0;)
    {
        n1=n2;
        n2=i;
        i=n1%n2;
    }
    printf("%d",n2);
    return 0;
}