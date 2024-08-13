#include<stdio.h> 
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
};

void main()
{
    struct node * n1 = (struct node *)malloc(sizeof(struct node));
    struct node * n2 = (struct node *)malloc(sizeof(struct node));
    n1->value = 123;
    n2->value = 456;
    n1->next = n2;
    printf("%d\t%d",n1->value,n1->next->value);

}