#include<stdio.h>
#include<string.h>
struct student{
    char stud[20];
    int rollno;
    int class;
}p[20];
void main()
{
    char n[20];
    for(int i=0;i<2;i++){
    printf("\nEnter The Name: ");
    scanf("%s",p[i].stud);
    // strcpy(p[i].stud,n);
    printf("\nEnter Roll No.: ");
    scanf("%d",&p[i].rollno);
    printf("\nEnter Class: ");
    scanf("%d",&p[i].class);
    printf("\nName of P%d is %s",i+1,p[i].stud);
    printf("\nRoll No of P%d is %d",i+1,p[i].rollno);
    printf("\nClass of P%d is %d",i+1,p[i].class);
    }
    printf("\a");
}