// program to generate multiplication table of given number in text
#include <stdio.h>

int main() {
    FILE* fptr;
    fptr=fopen("Table.txt","w");
    int num;
    printf("Enter the no:");
    scanf("%d",&num);
    int i=1;
    while (i<=10){
        int a=i*num;
        fprintf(fptr,"%d x %x = %d\n",num,i,a);
        i++;
    }
    fclose(fptr);
    return 0;
}