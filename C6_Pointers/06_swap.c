#include <stdio.h>

void swap(int *,int *);

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a=3;
    int b=4;
    printf("The value of a is %d and b is %d\n",a,b);
    swap(&a,&b);
    printf("The value of a is %d and b is %d\n",a,b);
    return 0;
}