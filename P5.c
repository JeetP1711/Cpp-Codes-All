#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr= fopen("test.txt","r+");
    char line[100];
    while(fgets(line,100,fptr)!=NULL)
    printf("%s",line);
    fprintf(fptr,"\nRagBooms.....");
    fclose(fptr);
    return 0;
}