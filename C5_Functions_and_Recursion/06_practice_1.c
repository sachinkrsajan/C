#include <stdio.h>

int average(int,int,int);

int average(int a,int b,int c){
    return ((a+b+c)/3);
}

int main() {
    int a,b,c;
    printf("Enter the No1:");
    scanf("%d",&a);
    printf("Enter the No2:");
    scanf("%d",&b);
    printf("Enter the No3:");
    scanf("%d",&c);
    printf("The averafe of 3 nos %d , %d and %d is %d.\n",a,b,c,average(a,b,c));
    return 0;
}