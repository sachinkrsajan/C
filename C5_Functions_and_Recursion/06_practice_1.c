#include <stdio.h>

float average(int,int,int);

float average(int a,int b,int c){
    return ((a+b+c)/3.0);  // why 3.0 because we have to make it float 
}

int main() {
    int a,b,c;
    printf("Enter the No1:");
    scanf("%d",&a);
    printf("Enter the No2:");
    scanf("%d",&b);
    printf("Enter the No3:");
    scanf("%d",&c);
    printf("The averafe of 3 nos %d , %d and %d is %f.\n",a,b,c,average(a,b,c));
    return 0;
}