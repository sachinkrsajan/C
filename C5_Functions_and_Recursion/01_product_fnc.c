#include <stdio.h>

int check_sum(int,int);

int check_sum(int a, int b){
    
    return a*b;    
}

int main() {

    int a,b;

    printf("Enter the value of a:\n");
    scanf ("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);

    printf("The Product of a and b is %d\n",check_sum(a,b));
    return 0;
}