//String in lower case...
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Lower()
{
    char str[20];
    int i,len;

    printf("\nThe string in lower case: ");

    for(len=0;str[len]!='\0';len++)
    {
        for(i=len;i<=len;i++)
        {
            if(str[i]>=65 && str[i]<=90)
            printf("%c",str[i]+32);
            else if(str[i]==32)
            printf(" ");
            else if(str[i]>=97 && str[i]<=122)
            printf("%c",str[i]);
            else
            printf("%c",str[i]);
        }
    }
}

void main(){
    char c,s[20];
    printf("Press L for Lower the string.... Or E to exit: ");
    scanf("%c",&c);
    if(c=='L'){
    printf("\nEnter A String: ");
    gets(s);
    Lower(s);
    }
    else
    exit(c);
}