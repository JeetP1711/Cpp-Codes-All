#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p = (int*)malloc(sizeof(int));
    *p=1;
    *(p+1)=12;
    printf("%d",p[0]);
    return 0;
}